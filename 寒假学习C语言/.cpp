#include<stdio.h>
//ָ���ָ��
int main(){
	int a=1;
	int *p1=&a;
	int **p2=&p1;
	int ***p3=&p2;
	
	printf("a=%d\t&a=%p\n",a,&a);
	printf("*p1=%d\tp1=%p\t&p1=%p\n",*p1,p1,&p1);//����������Ҳ������ֱ�����&p1�ǲ����еģ����ĵ�ַ����a�ĵ�ַ 
	printf("**p2=%d\t*p2=%p\tp2=%p\t&p2=%p\n",**p2,*p2,p2,&p2);//��������ʵ������һ��ָ����������һ��ָ�� 
	printf("***p3=%d\t**p3=%p\t*p3=%p\tp3=%p\t&p3=%p\n",***p3,**p3,*p3,p3,&p3);

	
} 
