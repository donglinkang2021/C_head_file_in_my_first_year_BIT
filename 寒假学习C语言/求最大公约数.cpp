#include<stdio.h>
//�����Լ��

int main() {
	int a, b, ret;

	scanf("%d %d", &a, &b);
//	if(a<b){
//		min=a;
//	}else{min=b;}
//	for(int i=1;i<=min;i++)
//	for(int i=min;i>=1;i--){
//		if(a%i==0&&b%i==0){
//			printf("%d\t",i);//���Ǹ���ϣ����һ����
//			break;
//		}
//	}

//	for (int i = 1; i <= (a < b ? a : b); i++) {
//		if (a % i == 0 && b % i == 0) {
//			ret = i;
//		}
//	}//��ͨ����
	while (a % b != 0) {
		ret = a % b;
		a = b;
		b = ret;
	}
	printf("%d\t", ret);
	return 0;
}
