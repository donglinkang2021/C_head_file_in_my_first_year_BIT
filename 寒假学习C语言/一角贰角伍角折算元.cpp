#include<stdio.h>
//遍历的应用
//一角二角五角凑成几元
int main() {
	int x, one, two, five;
	//给好三者的定义域，用for去遍历
	x=2;
	for (one = 1; one < 10 * x; one++) {
		for (two = 1; two < x * 10 / 2; two++) {
			for (five = 1; five < x * 10 / 5; five++) {
				if (one * 1 + two * 2 + five * 5 == x * 10) {
					printf("用%d个一角和%d个两角和%d个五角可以凑成%d元\n", one, two, five, x);
					goto out; 
				}
			}
		}
	}
	out:
		
	return 0;
}
