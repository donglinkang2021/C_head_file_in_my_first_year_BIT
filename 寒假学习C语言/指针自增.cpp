#include<stdio.h>
//ָ�������
int main(){
	int a[]={2,5,8,7,4};
	int *p=a;
	printf("%p\n",p);
	printf("*p++=%d,*++p=%d\n",*p++,*++p);//�������Ƿ��������������һ�����������ǰһ������ 
//	printf("*++p=%d,*p++=%d\n",*++p,*p++);
	printf("%p\n",p); 

	} 
