#include<stdio.h>
//���������
//λ���� 
int main(){
	int num;
//	scanf("%d",&num);
	num=0x5555;
	unsigned mask=1u<<31;//Ĭ����int//���λΪ1��unsigned��int,Ȼ������31λ��������� 
	for(;mask;mask>>=1){//����+=��mask=mask>>1 
		printf("%d",num&mask?1:0);
	} 
	printf("\n");
	return 0;
	
} 
