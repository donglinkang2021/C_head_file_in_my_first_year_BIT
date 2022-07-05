#include<stdio.h>
int main(){	
	char b=85;
	char a=69;
	char d=(b-a)*2-1;
	printf("%c%c%c%c%c%c%c%c\t",a-3,d++,a+=6,a+9,b,a++,++d,b++);	
} 
