#include<stdio.h>
#include<string.h>
#include <wchar.h>

typedef union{
	wchar_t wch;
	char mem[2];
}c2m; 

void demo1(){
	char a[3]="��";
	for(int i=0;i<2;i++){
		printf("%02hhx",a[i]);
	} 
	printf("\n");
}
void demo2(){
	printf("%u\n",sizeof(wchar_t)); // 2
}
int demo4() {
	wchar_t str = L'��';
	printf("\\u%.4x\n", str);
	return 0;
}

void demo5(){
	c2m a;
	a.wch=L'��';
	printf("\\u%02hhx%02hhx\n",a.mem[0],a.mem[1]); 
	printf("\\u%4x\n",a.wch); 
	char tmp[2]="��";
	printf("\\u%02hhx%02hhx\n",tmp[0],tmp[1]);
}


int main() {
	demo1(); // ced2
	demo2(); // 2
	demo4(); // \u6211
	demo5(); // \u1162 \u6211
	//�������ǿ��Կ�������ʹһ���ַ�������Դ��棬�����Ǻ�unicode�Ĵ�����Ʋ�һ�� 
}
