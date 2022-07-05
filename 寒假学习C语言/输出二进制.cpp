#include<stdio.h>
//输出二进制
//位运算 
int main(){
	int num;
//	scanf("%d",&num);
	num=0x5555;
	unsigned mask=1u<<31;//默认是int//最高位为1的unsigned的int,然后左移31位，用零填充 
	for(;mask;mask>>=1){//类似+=，mask=mask>>1 
		printf("%d",num&mask?1:0);
	} 
	printf("\n");
	return 0;
	
} 
