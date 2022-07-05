#include<stdio.h>
int main(){
	int a,b,c,num;
	scanf("%d",&num);
	a=num/100;
	b=(num-a*100)/10;//b=num/10%10;//b=num%100/10; 
	c=num-a*100-b*10;//c=num%10;
	
 
	printf("%d",c*100+b*10+a);
	return 0; 
}
