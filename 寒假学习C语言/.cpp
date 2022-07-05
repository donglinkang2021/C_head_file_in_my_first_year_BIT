#include<stdio.h>
//指针的指针
int main(){
	int a=1;
	int *p1=&a;
	int **p2=&p1;
	int ***p3=&p2;
	
	printf("a=%d\t&a=%p\n",a,&a);
	printf("*p1=%d\tp1=%p\t&p1=%p\n",*p1,p1,&p1);//在这里我们也发现了直接输出&p1是不可行的，他的地址还是a的地址 
	printf("**p2=%d\t*p2=%p\tp2=%p\t&p2=%p\n",**p2,*p2,p2,&p2);//至此我们实现了用一个指针来储存另一个指针 
	printf("***p3=%d\t**p3=%p\t*p3=%p\tp3=%p\t&p3=%p\n",***p3,**p3,*p3,p3,&p3);

	
} 
