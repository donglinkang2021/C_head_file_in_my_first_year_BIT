#include<stdio.h>
//函数原型声明
//改改前面的代码 
int isprime(int);//声明//先声明存在一个这样的函数 
 
int main() {
	int a, b, sum = 0, cnt = 0;
	scanf("%d %d", &a, &b);
	if (a == 1) {
		a = 2;
	}
	for (int i = a; i <= b; i++) {
		if (isprime(i)) {
			sum += i;
			cnt++;
		}
	}
	printf("%d %d", cnt, sum);
	return 0;
}
//最后再说一下函数具体是什么
//定义 
int isprime(int i) {
	int ret = 1;
	for (int j = 2; j < i; j++) {
		if (i % j == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}
//这样子有利于阅读，有利于知道我们一开始需要什么函数，下面再根据定义去制作函数 
