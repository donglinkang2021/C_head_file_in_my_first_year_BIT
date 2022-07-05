#include<stdio.h>
//count the time of the input number from 0 to 9 
int main(){
	int x;
	int count[10];
	//initialize
	for(int i=0;i<10;i++){
		count[i]=0;
	}
	//input
	scanf("%d",&x);
	while(x!=-1){
		if(x>=0&&x<=9){
			count[x]++;
		}
		scanf("%d",&x);
	}
	//output
	for(int i=0;i<10;i++){
		printf("%d:%d\n",i,count[i]);	
	}
	
} 
