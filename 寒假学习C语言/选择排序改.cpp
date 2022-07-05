#include<stdio.h>
//封装选择排序函数(从小到大)（改）（到时候可以写一堆这种） 
void rank(int a[],int len){
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}
} 
int main(){
	int a[]={5,2,0,1,3,1,4};
	int len=sizeof(a)/sizeof(a[0]);
	rank(a,len);
	for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
} 
