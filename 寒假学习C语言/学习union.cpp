#include<stdio.h>
//union
//�õ�һ�������ڲ��ĸ����ֽ� 
//�ô���д������
typedef union{
	int i;
	char ch[sizeof(int)];
}CHI;
int main(){
	CHI chi;
	int i;
	chi.i=1234;
	for(int i=0;i<sizeof(int);i++){
		printf("%02hhX\t",chi.ch[i]);//D2      04      00      00 
	}
	printf("\n");
	for(int i=0;i<sizeof(int);i++){
		printf("%x\t",chi.ch[i]);//���Ǻܶ������� ffffffd2        4       0       0
	}
	printf("\n");
	return 0;
	
} 
