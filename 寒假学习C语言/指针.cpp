#include<stdio.h>
//��ΰ�swapд��?
//�ѵ�ַ����ȥ��������ַ�ϵ�ֵ�� 
void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
} 
int main(){
	int a=1;
	int b=2;
	int* p=&a;//����ָ���������ʱ��������int* 
	int* q=&b;
	printf("%d:%p %d:%p\n",*p,p,*q,q);
	swap(p,q);
	printf("%d:%p %d:%p",*p,p,*q,q);

}
