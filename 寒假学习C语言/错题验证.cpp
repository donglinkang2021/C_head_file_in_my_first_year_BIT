#include<stdio.h>
//prove
//this program tell us the random num must be positive
//inlcude ²»ÊÇ¹Ø¼ü×Ö 
void demo(){
	printf("%f",(double)(10/4*4));
}
void demo2(int i,int x,int y){
	do{
		++i;
		if(i%2)
			x+=i,i++;
		y+=i++;printf("i=%d x=%d y=%d\n",i,x,y);
	}while(i<=7);
	printf("%d %d %d",i,x,y);
}
int main(){
	int k,i=0;
	while(k!=0){
		k/=2;
		i++;
		printf("%d %d\n",k,i);	 
	}
	demo2(0,0,0);
}
