#include<stdio.h>
//�߾���С��
int main() {
	int a, b;
	printf("please input num a/b,a must be smaller than b\n");
	scanf("%d/%d", &a, &b);
//	int c=0;
//	for(int i=0;i<200;i++){
//		while(a<b){
//			a*=10;
//			c*=10;
//		}
//		c+=a/b;
//		a/=b;/*���ǲ��ѷ������һ��Ҫ��һ��������������漰��֮��������ˣ���������Ŀǰֻ��
//		�������*/
//
//	}
//	printf("%d",c);
//
	if (a == 0) {
		printf("error");
	} else {
		printf("0.");
		for (int i = 0; i < 200; i++) {
			if (a != 0) {
				int sole = 0;
				while (a < b) {
					a *= 10;
					sole++;
				}
				if (sole == 2) {
					printf("0");
				}

				printf("%d", a / b);
				a %= b;
			}
		}
	}
}
