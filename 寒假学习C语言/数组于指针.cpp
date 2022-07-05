#include<stdio.h>
//数组于指针
int main(){
	int a[]={1,2,3,4,5};
	printf("*a=%d\n",*a);
	printf("a=%p\n",a);
	printf("&a=%p\n",&a);//这里说明了数组变量只是可以看作一个const_array但并不真的是array,因为他的&a并不像const_array一样有一个自己的地址 
	printf("a[0]=%d\n",a[0]);
	printf("&a[0]=%p\n",&a[0]);
	int const*p=a;//获得首地址 
	printf("p[4]=%d\n",p[4]);//数组变量是一个常量指针，不能用来被赋值 
	printf("*(p+4)=%d\n",*(p+4));//上下这两个是等价的 
	printf("*p=%d\n",*p); 
	printf("p=%p\n",p);
	printf("&p=%p\n",&p);

} 
