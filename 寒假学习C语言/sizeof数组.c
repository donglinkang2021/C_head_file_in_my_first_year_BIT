#include<stdio.h>
//sizeof输入数组
//数组变量本身表示地址 
//void minmax(int a[], int len, int*min, int*max);//这会不能只输入类型，因为是数组传进去的实际上是指针 
void minmax(int*, int , int*, int*);
//这里我们知道了以下四种函数"原型"是等价的
/*
int sum(int *ar,int n)
int sum(int *,int)
int sum(int ar[],int n)
int sum(int [],int)
*/ 
int main() {
	int a[] = {1, 2, 3, 4, 5, 3, 4, 5, 6, 7, 8, 0, 9};
	int len = sizeof(a) / sizeof(a[0]);
//
	printf("main_sizeof(a)=%u\n",sizeof(a));
	printf("main_a=%p\n",a);
//		
	int min, max;
	minmax(a, len, &min, &max);
	printf("min=%d,max=%d\n", min, max);
	return 0;
}
void minmax(int a[], int len, int*min, int*max)//传进去的是数组指针，这个指针的size就是4 
{
	*min = *max = a[0];
//	
		printf("minmax_sizeof(a)=%u\n",sizeof(a));
		printf("minmax_a=%p\n",a);
//	
	for (int i = 0; i < len; i++) {
		if (*min > a[i]) {
			*min = a[i];
		}
		if (*max < a[i]) {
			*max = a[i];
		}
	}
}

//总结：如果明白了这个的话，我们排序时根本不用特意构造一个指针数组传进去再一个个改：见 
