#include<stdio.h>
//����

int main() {
	int a[100], time = 0; //����Ϊ��֪������Ĵ�С������һ�������㹻�󣻵���������Ҳ��������ָ���������޴�
	//��������
	//������ʱ���ǿ��԰���������д��һ���ϣ�����֮���ÿո����
	//����֮ǰ�Ļ��������ۣ�����ȷʵ�ǿ��е�
	do {
		scanf("%d", &a[time]);
		time++;
	} while (a[time - 1] != -1);
	//���ֵ
	double anverage = 0, sum = 0;
	for (int i = 0; i < time - 1; i++) {
		sum += a[i];
	}
	anverage = sum / (time - 1);
	printf("anverage=%f\n", anverage);
	//�������ȽϷ��ϵ�
	for (int i = 0; i < time - 1; i++) {
		if (a[i] > anverage) {
			printf("%d", a[i]);
			if (i < time - 2) {
				printf(" ");
			}
		}

	}

}
