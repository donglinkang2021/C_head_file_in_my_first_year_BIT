#include<stdio.h>

typedef union { //CHF�������ǿ��Է��ʵ�float������ڴ�
	float value;
	char mem[sizeof(float)];
} MEMF;
typedef union { //CHD�������ǿ��Է��ʵ�double������ڴ�
	double value;
	char mem[sizeof(double)];
} MEMD;

void struct_print_demo() {
	MEMF a;
	for (int j = -4; j <= 4; j++) {
		a.value = (float)j;
		for (unsigned i = 0; i < sizeof(float); i++) {
			printf("%02hhX ", a.mem[i]);
		}
		printf(":%2d\n", j);
	}
}

void demo1() {
	MEMF a;
	a.value=0.5;
	printf("%.2f|", a.value);
	for (unsigned i = 0; i < sizeof(float); i++) {
		printf("%02hhX ", a.mem[i]);
	}
}

int main() {
	demo1();
}
