#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//��̬�����ڴ�ռ�
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
//	printf("%p",p);//����֤����ȷʵ��������ռ� 
//	printf("������%dMB�Ŀռ�", cnt);
	free(p);
	 
	return 0;
}
