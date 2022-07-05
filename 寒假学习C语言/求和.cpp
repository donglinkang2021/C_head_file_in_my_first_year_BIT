#include<stdio.h>
//求和
double f(int n) {
	double sum = 0;
	for (int i = 1; i < n + 1; i++) {
		sum += 1.0 / i;
	}
	return sum;
}//求1/n的和 
double g(int n) {
	double sum = 0;
	double sign = 1.0;
	for (int i = 1; i < n + 1; i++) {
		sum += sign / i;
		sign = -sign;
	}
	return sum;
}//求((-1)^(n-1))*1/n

int main() {
	double a;
	a = g(100);

	printf("%f", a);

}
