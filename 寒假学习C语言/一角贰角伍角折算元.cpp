#include<stdio.h>
//������Ӧ��
//һ�Ƕ�����Ǵճɼ�Ԫ
int main() {
	int x, one, two, five;
	//�������ߵĶ�������forȥ����
	x=2;
	for (one = 1; one < 10 * x; one++) {
		for (two = 1; two < x * 10 / 2; two++) {
			for (five = 1; five < x * 10 / 5; five++) {
				if (one * 1 + two * 2 + five * 5 == x * 10) {
					printf("��%d��һ�Ǻ�%d�����Ǻ�%d����ǿ��Դճ�%dԪ\n", one, two, five, x);
					goto out; 
				}
			}
		}
	}
	out:
		
	return 0;
}
