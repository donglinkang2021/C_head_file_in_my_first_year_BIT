#include<stdio.h>
//��
#define _DEBUG//��������������� 
#define PI 3.14159265
#define Format "%f\n"
#define PI2 2*PI
#define PRT printf(Format,PI);\
	printf(Format,PI2)//ĩβ��Ҫ�ӷֺ� 
#define cube(x) ((x)*(x)*(x))
#define RADTODEG1(x) (x*57.29578)
#define RADTODEG2(x) (x)*57.29578
#define RADTODEG(x) ((x)*57.29578)//��ȷд�� @����ֵҪ���� @�������ֵĵط�Ҫ���� 
#define MIN(a,b) ((a)>(b)?(b):(a))
int main() {
//	PRT;
//	printf("%s\n", __FILE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%d\n", __LINE__);
//	printf("%d\n", __STDC__);
//	int i=1;
//	printf("%d\n",cube(++i));//���˵��������ִ������֮��ĳ˷���ִ�г��ڵ����� 
	printf("%f\n%f\n",180/RADTODEG1(1),RADTODEG2(5+2));
	printf("%f\n%f\n",180/RADTODEG2(1),RADTODEG1(5+2));//�滻ʱ������Ӧ�÷����Ĵ��� 
	printf("%f\n%f\n",180/RADTODEG(1),RADTODEG(5+2));
//	printf("%d",i);
	return 0;
 
}
