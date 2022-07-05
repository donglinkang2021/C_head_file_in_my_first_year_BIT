#include<stdio.h>
//judge the solo number
int main() {
	int num, isprime = 1;
	printf("please input a number\n");
	scanf("%d", &num);

	//judge
	//引入isprime的思想非常巧妙
	//如果我们在for循环里应用printf,显然不合适，我们希望用一个特征值来代表是否solo
	//所以引入了isprime
	 

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			isprime = 0;
			break;//离开for循环 
		}//我们知道如果它有一个其它因子（除开它自己和1）就不是素数了，所以我们可以不进行下去 
	}
	if (isprime == 1) {
		printf("%d is a solo number.", num);
	} else {
		printf("%d isn't a solo number.", num);
	}
}
