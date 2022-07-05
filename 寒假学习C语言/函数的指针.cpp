#include<stdio.h>
int plus(int a, int b) {
	return a + b;
}
int minor(int a, int b) {
	return a - b;
}
void cal(int(*f)(int, int)) {
	printf("%d", (*f)(2, 3));
}
int main() {
	cal(plus);
	cal(minor);
}
