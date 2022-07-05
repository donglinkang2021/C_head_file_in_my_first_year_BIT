#include<stdio.h>
//数组

int main() {
	int a[100], time = 0; //正因为不知道数组的大小，我们一般让他足够大；但后面我们也可以利用指针让它无限大
	//输入数组
	//在输入时我们可以把所有输入写在一行上，数字之间用空格隔开
	//根据之前的缓冲区理论，这样确实是可行的
	do {
		scanf("%d", &a[time]);
		time++;
	} while (a[time - 1] != -1);
	//求均值
	double anverage = 0, sum = 0;
	for (int i = 0; i < time - 1; i++) {
		sum += a[i];
	}
	anverage = sum / (time - 1);
	printf("anverage=%f\n", anverage);
	//遍历并比较符合的
	for (int i = 0; i < time - 1; i++) {
		if (a[i] > anverage) {
			printf("%d", a[i]);
			if (i < time - 2) {
				printf(" ");
			}
		}

	}

}
