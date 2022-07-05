#include<stdio.h>
//传参
void cheer(int i){
	printf("cheer %d\n",i);
} 
//在这里翁恺老师也说这是函数，（）里是函数的变量空间 
void swap(int i,int j/*形参；参数*/){ 
	int temp=i;
	i=j;
	j=temp;
} 
int main(){
	cheer(2.4);
	int a=5;
	int b=6;
	swap(a,b/*实参；值*/);/*在这里我们也看出了C语言中只是把值传给了函数，并没有对变量本身（地址）造成影响,
	也就是说，函数真正的用处只是拿变量上的值去加工处理*/
	printf("%d %d",a,b);
	return 0;
}
