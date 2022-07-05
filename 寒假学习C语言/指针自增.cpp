#include<stdio.h>
//指针的自增
int main(){
	int a[]={2,5,8,7,4};
	int *p=a;
	printf("%p\n",p);
	printf("*p++=%d,*++p=%d\n",*p++,*++p);//这里我们发现了是先输出后一个变量在输出前一个变量 
//	printf("*++p=%d,*p++=%d\n",*++p,*p++);
	printf("%p\n",p); 

	} 
