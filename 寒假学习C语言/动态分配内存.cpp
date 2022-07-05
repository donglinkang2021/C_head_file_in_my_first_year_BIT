#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//动态分配内存空间
int main() {
	void *p=0;
	int cnt = 0;
	while ((p = malloc( 1))) {
		cnt++;
		printf("%p\n",p);
		Sleep(1000);
		free(p);
	}
//	p=malloc(0);
//	printf("%p",p);//这里证明了确实分配了零空间 
//	printf("分配了%dMB的空间", cnt);
	free(p);
	 
	return 0;
}
