#include<stdio.h>
//union
//得到一个整数内部的各个字节 
//用处：写二进制
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
		printf("%x\t",chi.ch[i]);//不是很懂这个输出 ffffffd2        4       0       0
	}
	printf("\n");
	return 0;
	
} 
