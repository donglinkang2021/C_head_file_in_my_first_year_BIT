#include<stdio.h>
//judge the solo number
int main() {
	int num, isprime = 1;
	printf("please input a number\n");
	scanf("%d", &num);

	//judge
	//����isprime��˼��ǳ�����
	//���������forѭ����Ӧ��printf,��Ȼ�����ʣ�����ϣ����һ������ֵ�������Ƿ�solo
	//����������isprime
	 

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			isprime = 0;
			break;//�뿪forѭ�� 
		}//����֪���������һ���������ӣ��������Լ���1���Ͳ��������ˣ��������ǿ��Բ�������ȥ 
	}
	if (isprime == 1) {
		printf("%d is a solo number.", num);
	} else {
		printf("%d isn't a solo number.", num);
	}
}
