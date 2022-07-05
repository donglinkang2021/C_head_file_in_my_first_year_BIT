#include<stdio.h>
//typedef
typedef char* strings;
typedef struct {
	int month;
	int day;
	int year;
}date;
typedef struct node{
	int data;
	struct node *next;
}aNode;//这样用aNode就可以代替struct node 

int main(){
	date a;
	strings s[10];
	aNode p,q;
	p.data=1;
	p.next=&q;
	q.data=2;
	printf("%d",p.next->data);
}
