#include<stdio.h>
//封装选择排序
/*@rank*/
/*@swap*/
//交换两个元素的地址上的值，并不是交换地址 
void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
} 
//比较变量地址上的值，并排好序，选择排序（通过交换地址上的值来排序）
void rank(int* a[],int len){
	for(int i=len-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(*a[j]>*a[i]){
//				int temp =*a[j];
//				*a[j]=*a[i];
//				*a[i]=temp;
				swap(a[j],a[i]);
			}
		}
	}
}
int main(){
//先随便写几个尝试一下 
//	int b=2,c=1,d=3;
//	int* a[]={&b,&c,&d};//声明和后面的用法不太一样，把地址付给这个数组 
//	rank(a,sizeof(a)/sizeof(a[0]));
//	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
//		printf("%d\n",*a[i]);
//	}
	int a[]={1,2,7,4,5,8,9,3,12};
	int len=sizeof(a)/sizeof(a[0]);
	//声明指针变量 
	int* b[len];
	//将数组a的一个个元素地址赋给b 
	for(int i=0;i<len;i++){
		b[i]=&a[i]; 
	}
//	//输出看看原地址，这里我们发现输出前和输出后的地址本身好像并没有发生交换，我们去swap里头看看 
//	for(int i=0;i<len;i++){
//		printf("%p\t",&a[i]);
//	}
//	printf("\n"); 
	//排序 
	rank(b,len);
	//output 检验结果 
	for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	 printf("\n");
//	for(int i=0;i<len;i++){
//		printf("%p\t",b[i]);
//	}
//	这里我们输出了b看一下他们的地址发现还是连续排列的，这是不是说明之前不是连续排列的？
//实验结果证明，地址确实是连续排列的，只不过我们写程序时没看清，交换的是地址上的值。。。 
	 
	 return 0;

}
 
