#include<stdio.h>
//hash table散列表
int amount[]={1,5,10,25,50};
char *name[]={"penny","nickel","dime","quarter","half-dollar"};
//注意到这里的数组是在main之外定义的，所以可以传进去 
int search(int key,int a[],int len){
	int ret=-1;
	for(int i=0;i<len;i++){
		if(key==a[i]){
			ret=i;
			break;
		}
	}
	return ret;
}
int main(){
	int k=10;
	int r=search(k,amount,sizeof(amount)/sizeof(amount[0]));
	if(r>-1){
		printf("%s\n",name[r]);
	}
}
