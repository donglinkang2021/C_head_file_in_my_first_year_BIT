#include<stdio.h>
//ѧָ�뿩�������ָ�������
int main(){
	int a=1;
	int p=(int)&a;
	
	printf("i value is %d\n",&a);
	printf("i address is %p\n",&a);
	printf("i x value is 0x%x\n",&a);
	printf("%u\n",sizeof(int));
	printf("%u\n",sizeof(&a));
	

} 
