#ifndef _DATA_SHOW_H_ 
#define _DATA_SHOW_H_   
#define f(a) &a,&a-1
#include<stdio.h> 
/*
这个文档用来研究变量内部的结构，或者写一些头文件的原函数 
*/
void bitshow(int num) { //打印变量的二进制及其十六进制形式，可以直接改变量前的类型
	int cnt = 0, sum = 0;
	unsigned size = sizeof(num);
	unsigned mask = 1u << (size * 8 - 1); //0x10 00 00 00 unsigned也是四个字节
	for (; mask; mask >>= 1) {
		int tmp = num & mask ? 1 : 0;
		printf("%d", tmp);
		cnt++;
		if (cnt == 4) {
			sum += tmp;
			printf("|%x\n", sum);
			cnt = 0;
			sum = 0;
		} else {
			sum += tmp;
			sum *= 2;
		}
	}
	printf("\n");
}
void print_type(void *p,void *q) {/*输出变量x可能的类型:print_type(f(x))*/
	/*
	说明：这个函数主要是想用来输出数据的类型
	尝试：这里尝试过用空指针来获取地址；
	不过发现获取地址后不能直接的使用地址中的值
	结果：用下面的trick即可，前一个指针和后一个指针的差为内存大小 
	*/
//	printf("%s=%p\n", var_name(p), p);
//	printf("%s=%p\n", var_name(q), q);
	printf("size:%d\n",p-q);
	printf("type:");
	switch (p-q) {
		case 1:
			printf("char or bool or void\n"); 
			break;
		case 4:
			printf("int or float or unsigned or long\n"); 
			break;
		case 8:
			printf("double or long long\n");
			break;
		case 12:
			printf("long double\n");
			break;
		default:
			break;
	}
	printf("address:%p\n",p);
}
#endif
