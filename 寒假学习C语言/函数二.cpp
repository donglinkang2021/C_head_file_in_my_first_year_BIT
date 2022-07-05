#include<stdio.h>
//函数2
//求一段区间所有数的和，闭区间
int sum(int i,int j){
	int sum=0; 
	for(;i<=j;i++){
		sum+=i;
	}
	printf("%d\n",sum);
	return sum;
} 
int main(){
	sum(1,10);
	sum(20,30);
	sum(35,45);
	return 0;
	
} 
