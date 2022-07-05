#include<stdio.h>
//ึธี๋สýื้
int main(){
	int a[10];
	printf("&a:%p\n",&a);
	printf("a:%p\n",a);
	for(int i=0;i<10;i++){
		printf("a[%d]:%p\n",i,&a[i]);
	}
} 
