#include<stdio.h>
//二分搜索 
//需要一个从小到大排好序的数组 
/*@search
@rank
@swap*/ 
void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
} 
void rank(int* a[],int len){
	for(int i=len-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(*a[j]>*a[i]){
				swap(a[j],a[i]);
			}
		}
	}
}
int search(int key,int a[],int len){
	int left=0;
	int right=len-1;
	int ret=-1;
	while(right>=left){
		int mid=(left+right)/2;
		if(a[mid]==key){
			ret=mid;
			break;
		}else if(a[mid]<key){
			left=mid+1;
		}else if(a[mid]>key){
			right=mid-1;
		}
	}
	return ret;
} 
int main(){
	int k=9;
	 
	int a[]={1,4,3,2,5,6,10,8,9,7};
	int len=sizeof(a)/sizeof(a[0]);
	int* b[len];
	for(int i=0;i<len;i++){
		b[i]=&a[i];
	}
	
	rank(b,len);
	
	int r=search(k,a,sizeof(a)/sizeof(a[0]));
	
	printf("a[%d]=%d",r,k);
} 
