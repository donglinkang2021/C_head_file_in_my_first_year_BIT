#include<stdio.h>
#include<string.h>
//实现类似strstr功能但要输出位置
//即字符串比对


int main() {
	printf("please input two strings,and we will find the first string from the below and give you an address!\n");
	char a[10000] = {0};
	char b[10000] = {0};
	scanf("%s", &a);
	scanf("%s", &b);
	char*p = strstr(b, a);
	int ret = 0;
//	printf("p=%p b=%p p-b=%p",p,b,p-b);
	while (p) {
		printf("%d\t", p - b);
		p++;
		p = strstr(p, a);
		ret = 1;
	}
	if (!ret) {
		printf("-1");
	}
	return 0;
}

