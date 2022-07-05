#ifndef _RECURSION_H_
#define _RECURSION_H_
#include<stdio.h>
/*here we learn some recursion*/
/*
you can compare the debug period of
f(0,0,0,3) & for3(3), the former one is
the recursion version of for-loop(in for3 function)
*/ 
void f(int x, int y, int z, int num) {
	//recursion
	if (x > num) {
		return;
	}
	if (y > num) {
		return f(x + 1, 0, 0, num);
	}
	if (z > num) {
		return f(x, y + 1, 0, num);
	}
	//process
	if (x + y + z == num) {
		printf("%2d+%2d+%2d=%2d|n=%2d\n", x, y, z, x + y + z, num);
	}
	//min step 
	return f(x, y, z + 1, num);
}
void for3(int num) {
	for (int i = 0; i <= num; i++) {
		for (int j = 0; j <= num; j++) {
			for (int k = 0; k <= num; k++) {
				if (i + j + k == num) {
					printf("%2d+%2d+%2d=%2d|n=%2d\n", i, j, k, i + j + k, num);
				}
			}
		}
	}
}

#endif
