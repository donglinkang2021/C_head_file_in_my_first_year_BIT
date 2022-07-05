#include"node.h"
#include<stdio.h>
#include<stdlib.h>
//typedef struct _node{//定义节点
//	int value;
//	struct _node *next;
//}Node;
typedef struct _list {
	Node *head;
	Node *tail;
} List;

void add(List *list, int num);//添加在尾部
void addhead(List *list,int num); //添加在头部 
void printlist(List *list);//打印
void printtsil(List *list);//逆序输出 
int searchlist(int number, List *list); //查找:找到元素个数
void removelist(int number, List *list); //删除：直接删除一个number
void freelist(List *list);//清除列表 
int main() {
	int num;
	//initialize
	List list;
	list.head = NULL;
	list.tail = NULL;
	//input
	do {
		scanf("%d", &num);
		if (num != -1) {
			//add to linked-list
			add(&list, num);
		}
	} while (num != -1);
	//output
	printlist(&list);
	printtsil(&list);
	return 0;
}

void add(List *list, int num) {
	//等待输入的节点
	Node *p = (Node*)malloc(sizeof(Node));//分配一个Node类型大小的内存空间, 并把它赋给Node*型的变量p
	p->value = num;
	p->next = NULL;
	if (list->tail) {
		list->tail->next = p; //每次将表尾与新插入元素连接起来
		(list->tail) = list->tail->next; //并记录新表尾
	} else {//必须执行一次初始化，即先插入表头，并让表尾等于表头
		list->head = p;
		list->tail = list->head;
	}
}
void addhead(List *list,int num){
	Node *p=(Node *)malloc(sizeof(Node));
	p->value=num;
	if(list->head){
		p->next=list->head;
		list->head=p;
	}else{
		list->tail=p;
		list->head=list->tail;
	}
}
void printlist(List *list) {
	for (Node* i = list->head; i ; i = i->next) {//从表头开始读起，当读到NULL时，终止 //被说成了是非常经典的写法
		printf("%d\t", i->value);//上面这个i!=NULL就可以写成i
	}
	printf("\n");
}
void printtsil(List *list){
	List list2;
	for(Node* i=list->head;i;i=i->next){
		addhead(&list2,i->value);
	} 
	for(Node* i=list2.head;i;i=i->next){
		printf("%d\t", i->value);
	}
	printf("\n");
}
int searchlist(int number, List *list) {
	int isFound = 0;
	int cnt = 0;
	for (Node* i = list->head; i ; i = i->next) {
		if (i->value == number) {
			isFound++;
		}
		cnt++;
	}
	return isFound;
}
void removelist(int number, List *list) {
	Node* q=NULL;
	for (Node* p = list->head; p ;q=p,p = p->next) {//引入q来记录p上一次读取到的数据 
			if (p->value == number) {//我们要判断边界情况 
				if(q){//Any pointer on the left of -> must be checked to promise that it isn't Null;
					q->next=p->next; 
				}else{//之所以要这样做是因为我们想到了刚进来时q=NULL,所以这时相当于直接删掉开头，而不是让前后两个连起来 
					list->head=p->next;
				}
				free(p);
				break;
			}
		}
}
void freelist(List *list){
	Node* q;
//	Node* p=list->head;
//	while(q){
//		q=p->next;
//		free(p);
//	}
	for (Node* p = list->head; p ; p = q){
		q=p->next;
		free(p);
	}
}

//	Node *last = list->head;
//	if (last) {
//		while (last->next) {
//			last = last->next;
//		}
//		//attach
//		last->next = p;
//	} else {
//		list->head = p;
//	}


