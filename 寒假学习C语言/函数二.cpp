#include<stdio.h>
//����2
//��һ�������������ĺͣ�������
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
