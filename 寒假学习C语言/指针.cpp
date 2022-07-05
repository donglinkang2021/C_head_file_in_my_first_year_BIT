#include<stdio.h>
//如何把swap写对?
//把地址传进去，交换地址上的值！ 
void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
} 
int main(){
	int a=1;
	int b=2;
	int* p=&a;//开辟指针变量，此时的声明是int* 
	int* q=&b;
	printf("%d:%p %d:%p\n",*p,p,*q,q);
	swap(p,q);
	printf("%d:%p %d:%p",*p,p,*q,q);

}
