#include<stdio.h>
int main() {
	int num = 0;

	printf("Please the number of the team.\n");
	scanf("%d", &num);

	int rest = num % 2;
    printf("1");
	for (int i = 3; i < num + 1; i += 2) {
		printf(" %d", i);
		//TODO
	}


}
