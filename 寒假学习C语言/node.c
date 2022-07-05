#include"node.h"
#include<stdio.h>
#include<stdlib.h>
//typedef struct _node{//����ڵ�
//	int value;
//	struct _node *next;
//}Node;
typedef struct _list {
	Node *head;
	Node *tail;
} List;

void add(List *list, int num);//�����β��
void addhead(List *list,int num); //�����ͷ�� 
void printlist(List *list);//��ӡ
void printtsil(List *list);//������� 
int searchlist(int number, List *list); //����:�ҵ�Ԫ�ظ���
void removelist(int number, List *list); //ɾ����ֱ��ɾ��һ��number
void freelist(List *list);//����б� 
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
	//�ȴ�����Ľڵ�
	Node *p = (Node*)malloc(sizeof(Node));//����һ��Node���ʹ�С���ڴ�ռ�, ����������Node*�͵ı���p
	p->value = num;
	p->next = NULL;
	if (list->tail) {
		list->tail->next = p; //ÿ�ν���β���²���Ԫ����������
		(list->tail) = list->tail->next; //����¼�±�β
	} else {//����ִ��һ�γ�ʼ�������Ȳ����ͷ�����ñ�β���ڱ�ͷ
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
	for (Node* i = list->head; i ; i = i->next) {//�ӱ�ͷ��ʼ���𣬵�����NULLʱ����ֹ //��˵�����Ƿǳ������д��
		printf("%d\t", i->value);//�������i!=NULL�Ϳ���д��i
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
	for (Node* p = list->head; p ;q=p,p = p->next) {//����q����¼p��һ�ζ�ȡ�������� 
			if (p->value == number) {//����Ҫ�жϱ߽���� 
				if(q){//Any pointer on the left of -> must be checked to promise that it isn't Null;
					q->next=p->next; 
				}else{//֮����Ҫ����������Ϊ�����뵽�˸ս���ʱq=NULL,������ʱ�൱��ֱ��ɾ����ͷ����������ǰ������������ 
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


