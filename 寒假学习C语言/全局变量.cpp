#include<stdio.h>
//全局变量
//静态本地变量实际上是一种全局变量 
/*
上面两者位于相同的内存区域；
但是静态本地变量同时具有全局的生存期和函数内部的局部作用域（static）（本地可访问） 
*/
int f(void);
int gAll=12;//没有做初始化的全局变量会得到零，指针会得到NULL //而本地变量不会得到0
int g2=gAll;//全局变量不应该和另一个全局变量联系在一块 
 
int main(){
	printf("in %s gAll=%d,&gAll=%p\n",__func__,gAll,&gAll);
	f();
	f();
	f();
	printf("agn in %s gAll=%d,&gAll=%p\n",__func__,gAll,&gAll);
	return 0;
} 
int f(void){
	static int gAll=1; 
	int k=1;
	printf("in %s k=%d,&k=%p\n",__func__,k,&k);
	printf("in %s gAll=%d,&gAll=%p\n",__func__,gAll,&gAll);
	gAll+=2;
	printf("agn in %s gAll=%d,&gAll=%p\n",__func__,gAll,&gAll);
	return gAll;
}
