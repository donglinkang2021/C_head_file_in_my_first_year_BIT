#include<stdio.h>
int main() {
	//缓冲区的好玩应用 
	//交换数值(还是借用了第三方) ，而且还输入了三个数 
	int a,b;
	printf("Please input the number a!MAYBE YOU SHOULD TRY AGAIN......\n");
	scanf("%d\n",&a);	
	printf("Please input the number b!\n");
	scanf("%d\n",&b);
	scanf("%d",&a);
	printf("a=%d,b=%d",a,b);
	return 0;
	
	 
}
