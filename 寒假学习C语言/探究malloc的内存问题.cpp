#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����malloc�����е��õ��ڴ�ȥ������
char *mycat(char *dst, char const *src, int *c[]) {  //����ָ��C��������ַ�Ƿ�һ��
	char *sum = (char *)malloc(strlen(dst) + strlen(src) + 1);
//���������ǰ���ٵ��ڴ�ռ���ɶ
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
//�������ֵ����ڴ�ռ���ɶ
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
//����C�Ƿ�õ������ǵĵ�ַ
	for (int i = 0; i < len; i++) {
		printf("%p:%c\n", c[i], *c[i]);
	}
	printf("\n");
//�Է���ֵ��ָ����free
	free(d);


//����˵���˺����е��ڴ沢û�б��Զ��ͷ�
//�ٿ�һ�µ�ַ״��
	for (int i = 0; i < len; i++) {
		printf("%p:%c\n", c[i], *c[i]);
	}
	printf("\n");
//nice��ƨ���ֲ�������ȫfree��
	return 0;
}
