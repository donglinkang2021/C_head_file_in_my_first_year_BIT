#include <stdlib.h>
#ifndef _NODE_H_
#define _NODE_H_
struct node  
{
	int data;  
    struct node * next;  
};  
  
typedef struct node NODE; 
typedef struct node * PNODE;
 
PNODE node_add_head(PNODE head, int data);
/*build a reverse sequence and return the head*/ 
PNODE node_add_tail(PNODE head, int data);
/*build a positive sequence and return the head,need to record the head first*/ 
void node_outlist( PNODE head );
/*output all the data from the head*/
void node_delete( PNODE head ); 
/*delete the node which is qualified*/
void node_sorted_list(PNODE head, int num);
/*build a linked list with the positve sequence*/ 
void node_sort_node(PNODE head);
/*sort the linked list*/

void node_sort_node(PNODE head) {
	for (PNODE i = head->next; i!= NULL;i = i->next) {
		for (PNODE j = i->next; j!= NULL;j = j->next) {
			if (i->data > j->data) {
				int temp=i->data;
				i->data=j->data;
				j->data=temp;
			}
		}
	}
}

PNODE node_add_head(PNODE head, int data) { //reverse sequence 
	PNODE p = (PNODE)malloc(sizeof(NODE));
	p->data = data;
	p->next = head->next;
	head->next = p;
	return head;
}
PNODE node_add_tail(PNODE head, int data) { //positive sequence 
	PNODE p = (PNODE)malloc(sizeof(NODE));
	p->data = data;
	head->next = p;
	head = head->next;
	head->next = NULL;
	return head; 
}
void node_outlist( PNODE head )  //output our linked_list
{   PNODE p;  
    p = head->next;  
    while ( p != NULL )  
    {   printf("%d\n", p->data);  
        p = p->next;  
    }  
}  
void node_process(PNODE head){
	for(PNODE p=head->next;p!=NULL;p=p->next){
		printf("%d\n", p->data);
	}
}
void node_delete( PNODE head ) 
{   PNODE p=head;
	PNODE pPrev;
	while(p->next!=NULL){
		pPrev=p;
		p=p->next;
		if(p->data<0){//change your condition here
			pPrev->next=p->next;
			free(p);
			p=pPrev; 
		}
	}
}
void node_sorted_list(PNODE head, int num) {
	PNODE p;
	p = (PNODE)malloc( sizeof(NODE) );
	p->data = num;
	if (head->next == NULL) {
		p->next=head->next;
		head->next=p;
	} else {
		char flag=1;
		PNODE i;
		for (i = head; i->next != NULL;) {
			PNODE iPrev = i;
			i = i->next;
			if (p->data < i->data) {
				/*insert*/
				iPrev->next = p;
				p->next = i;
				flag=0;
				break;
			}
//			else if(p->data == i->data){
//				flag=0;
//				break;
//			}
		}
		if(flag){
			i->next=p;
			p->next=NULL;
		}
	}
}
NODE* node_MoveNode2tail(NODE* head) {
	NODE * p = head;
	NODE * pPrev;
	NODE * ptail;
	ptail = head;
	char cnt = 0;
	while (ptail != NULL) {
		if (ptail->data % 2 == 0) {
			cnt++;
		}
		ptail = ptail->next;
	}
//	printf("%d num!\n", cnt);
	while (p->next != NULL) {
		pPrev = p;
		p = p->next;
		if ((p->data) % 2 == 0) { //change your condition here
			if (cnt-- == 0) {
				break;
			}
			ptail = head;
			while (ptail->next != NULL) {
				ptail = ptail->next;
			}
			ptail->next = p;
			ptail = p;
			pPrev->next=p->next;
			ptail->next = NULL;
			p=pPrev; 
//			node_outlist(head);
		}
	}
	return head;
}
#endif
