#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//测试malloc函数中调用的内存去哪里了
char *mycat(char *dst, char const *src, int *c[]) {  //引入指针C来读出地址是否一致
	char *sum = (char *)malloc(strlen(dst) + strlen(src) + 1);
//输出看调用前开辟的内存空间是啥
	for (int i = 0; i < strlen(dst) + strlen(src) + 1; i++) {
		printf("%p:%c\n", &sum[i], sum[i]);
	}
	printf("\n");
//
	for (int i = 0; i < strlen(dst); i++) {
		sum[i] = dst[i];
		c[i] = (int*)(&sum[i]);
	}
	for (int i = 0; i <= strlen(src); i++) {
		sum[strlen(dst) + i] = src[i];
		c[strlen(dst) + i] = (int*)&sum[strlen(dst) + i];
	}
//输出看赋值后的内存空间是啥
	for (int i = 0; i < strlen(dst) + strlen(src) + 1; i++) {
		printf("%p:%c\n", &sum[i], sum[i]);
	}
	printf("\n");
//
	return sum;


}

int main() {
	char a[] = "13443sdfsdfdsadsadas";
	char b[] = "!!9vtn456h63123123234343142543654";
	int len = strlen(a) + strlen(b) + 1;
	int *c[len] ;
	char *d = mycat(a, b, c);
	printf("%s\n", d );
//看看C是否得到了我们的地址
	for (int i = 0; i < len; i++) {
		printf("%p:%c\n", c[i], *c[i]);
	}
	printf("\n");
//对返回值的指针做free
	free(d);


//这里说明了函数中的内存并没有被自动释放
//再看一下地址状况
	for (int i = 0; i < len; i++) {
		printf("%p:%c\n", c[i], *c[i]);
	}
	printf("\n");
//nice个屁发现并不能完全free掉
	return 0;
}
