#include<stdio.h>
int main(){
	//����
	int num,sum;
	scanf("%d",&num); 
	//����һ������ֵ 
	int one,two,three;	
	scanf("%d %d %d",&one,&two,&three);
	sum=one+two+three;
	if(one==0){
		one=two;
	} 
	if(two==0){
		if(one<three){
			two=one;//TODO
		}
		if(three<one){
			two=three;//TODO
		} 
	}
	if(three==0){
		three=two;//TODO
	}
	sum=one+two+three-sum;
	printf("%d",sum);
	return 0;

	
} 
