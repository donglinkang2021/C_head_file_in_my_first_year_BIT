#include<stdio.h>
//sizeof��������
//������������ʾ��ַ 
//void minmax(int a[], int len, int*min, int*max);//��᲻��ֻ�������ͣ���Ϊ�����鴫��ȥ��ʵ������ָ�� 
void minmax(int*, int , int*, int*);
//��������֪�����������ֺ���"ԭ��"�ǵȼ۵�
/*
int sum(int *ar,int n)
int sum(int *,int)
int sum(int ar[],int n)
int sum(int [],int)
*/ 
int main() {
	int a[] = {1, 2, 3, 4, 5, 3, 4, 5, 6, 7, 8, 0, 9};
	int len = sizeof(a) / sizeof(a[0]);
//
	printf("main_sizeof(a)=%u\n",sizeof(a));
	printf("main_a=%p\n",a);
//		
	int min, max;
	minmax(a, len, &min, &max);
	printf("min=%d,max=%d\n", min, max);
	return 0;
}
void minmax(int a[], int len, int*min, int*max)//����ȥ��������ָ�룬���ָ���size����4 
{
	*min = *max = a[0];
//	
		printf("minmax_sizeof(a)=%u\n",sizeof(a));
		printf("minmax_a=%p\n",a);
//	
	for (int i = 0; i < len; i++) {
		if (*min > a[i]) {
			*min = a[i];
		}
		if (*max < a[i]) {
			*max = a[i];
		}
	}
}

//�ܽ᣺�������������Ļ�����������ʱ�����������⹹��һ��ָ�����鴫��ȥ��һ�����ģ��� 
