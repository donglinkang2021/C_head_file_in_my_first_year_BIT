#include<stdio.h>
//等价于上一个初尝指针
//用结构来做
struct {
	int amount;
	char *name;
} coins[] = {
	{1, "penny"},
	{5, "nickel"},
	{10, "dime"},
	{25, "quarter"},
	{50, "half-dollar"}
};
int main() {
	int k=50;
	for (int i = 0; i < sizeof(coins) / sizeof(coins[0]); i++) {
		if (k == coins[i].amount) {
			printf("%s\n", coins[i].name);
			break;

		}
	}
}
