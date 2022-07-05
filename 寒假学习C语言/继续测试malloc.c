#include<stdio.h>
#include<stdlib.h>
//demo
int main(){
	char *a=(char *)malloc(100);
	a="213123asdasda";
	
	for(int i=0;i<100;i++){
		printf("%p:%c\n",&a[i],a[i]);
	}
	printf("\n");
	
	free(a);
	
	for(int i=0;i<100;i++){
		printf("%p:%c\n",&a[i],a[i]);
	}
	printf("\n");
	
}
