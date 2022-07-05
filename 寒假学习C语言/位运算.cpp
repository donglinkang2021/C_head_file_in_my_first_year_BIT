#include<stdio.h>
//位运算
int main(){
	unsigned char c =0xAA;//因为要做位运算，所以让它是字符形式 
	printf("c=%hhx\n",c);
	printf("~c=%hhx\n",(char)~c);
	printf("-c=%hhx\n",(char)-c);
} 
