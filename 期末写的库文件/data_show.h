#ifndef _DATA_SHOW_H_ 
#define _DATA_SHOW_H_   
#define f(a) &a,&a-1
#include<stdio.h> 
/*
����ĵ������о������ڲ��Ľṹ������дһЩͷ�ļ���ԭ���� 
*/
void bitshow(int num) { //��ӡ�����Ķ����Ƽ���ʮ��������ʽ������ֱ�Ӹı���ǰ������
	int cnt = 0, sum = 0;
	unsigned size = sizeof(num);
	unsigned mask = 1u << (size * 8 - 1); //0x10 00 00 00 unsignedҲ���ĸ��ֽ�
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
void print_type(void *p,void *q) {/*�������x���ܵ�����:print_type(f(x))*/
	/*
	˵�������������Ҫ��������������ݵ�����
	���ԣ����ﳢ�Թ��ÿ�ָ������ȡ��ַ��
	�������ֻ�ȡ��ַ����ֱ�ӵ�ʹ�õ�ַ�е�ֵ
	������������trick���ɣ�ǰһ��ָ��ͺ�һ��ָ��Ĳ�Ϊ�ڴ��С 
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
