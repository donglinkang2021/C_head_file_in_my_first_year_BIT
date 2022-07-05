#include<stdio.h>
//输出100以内的素数
//int main() {
//	int j, i, isprime;
//	for ( j = 2; j <=1000; j++) {
//		//判断该数是否素数
//		for ( i = 2, isprime = 1; i < j; i++) {
//			if (j % i == 0) {
//				isprime = 0;
//			}
//		}
//		if (isprime == 1) {
//			printf("%d\t", j);
//		}
//
//	}
//	return 0;
//}

//输出前50个素数 
int main() {
	int cnt=0,j=2; 
	//for (int j = 2; cnt<50; j++)
	while(cnt<50)
	{
		int isprime = 1;
		for (int i = 2; i < j; i++) {
			if (j % i == 0) {
				isprime = 0;
				break;//从这里我们也看出了break只能跳出一重循环，这也为后面的goto做铺垫 
			}
		}
		if (isprime == 1) {
			printf("%d\t", j);
			cnt++;
		}j++;
	}
}
