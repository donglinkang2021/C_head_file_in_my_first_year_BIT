#include<stdio.h>
//λ����
int main(){
	unsigned char c =0xAA;//��ΪҪ��λ���㣬�����������ַ���ʽ 
	printf("c=%hhx\n",c);
	printf("~c=%hhx\n",(char)~c);
	printf("-c=%hhx\n",(char)-c);
} 
