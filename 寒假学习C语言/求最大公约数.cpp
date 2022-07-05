#include<stdio.h>
//求最大公约数

int main() {
	int a, b, ret;

	scanf("%d %d", &a, &b);
//	if(a<b){
//		min=a;
//	}else{min=b;}
//	for(int i=1;i<=min;i++)
//	for(int i=min;i>=1;i--){
//		if(a%i==0&&b%i==0){
//			printf("%d\t",i);//我们更加希望单一出口
//			break;
//		}
//	}

//	for (int i = 1; i <= (a < b ? a : b); i++) {
//		if (a % i == 0 && b % i == 0) {
//			ret = i;
//		}
//	}//普通方法
	while (a % b != 0) {
		ret = a % b;
		a = b;
		b = ret;
	}
	printf("%d\t", ret);
	return 0;
}
