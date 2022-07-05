#include<stdio.h>
#include<stdlib.h>
//demo
int main(){
	char *a=(char *)malloc(20);
	a="213123asdasdasdasds";
	
	for(int i=0;i<20;i++){
		printf("%p:%c\n",a[i],a[i]);
	}
	printf("\n");
	free(a);
	for(int i=0;i<20;i++){
		printf("%p:%c\n",a[i],a[i]);
	}
	printf("\n");
}
