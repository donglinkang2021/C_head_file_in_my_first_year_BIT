#include<stdio.h>
//���100���ڵ�����
//int main() {
//	int j, i, isprime;
//	for ( j = 2; j <=1000; j++) {
//		//�жϸ����Ƿ�����
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

//���ǰ50������ 
int main() {
	int cnt=0,j=2; 
	//for (int j = 2; cnt<50; j++)
	while(cnt<50)
	{
		int isprime = 1;
		for (int i = 2; i < j; i++) {
			if (j % i == 0) {
				isprime = 0;
				break;//����������Ҳ������breakֻ������һ��ѭ������ҲΪ�����goto���̵� 
			}
		}
		if (isprime == 1) {
			printf("%d\t", j);
			cnt++;
		}j++;
	}
}
