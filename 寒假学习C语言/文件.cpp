#include<stdio.h>
//�ļ�
int main(){
//	printf("%9d\n",123);
//	printf("%-9d\n",123);
//	printf("%-+9d\n",-123);//+������Ϊ�������������ǿ�����+�ţ�����Ǹ��������-�Ŷ������+�� 
//	printf("%+9d\n",123);
//	printf("% 9d\n",123);
//	printf("%09d\n",123);
//	printf("%9.3f\n",123.0);
//	printf("%*d\n",6,123);
//	printf("%*d\n",3,123);//*����ʽ�����ܴ�������
//	printf("%hhd\n",12345);//12345--->ʮ������3039--->ȡһ���ֽ�39����λ��ǰ��--->ʮ����Ϊ57 
//	printf("%lld%n\n",123452342342,&num); 
//	printf("%d\n",num);
//	scanf("%*d%d",&num);//�����*��������һ����������˼ 
//	printf("%d\n",num);
//	int num;
//	int i1,i2;
//	i1=scanf("%i",&num);//���ض�������ĸ��� 
//	i2=printf("%d\n",num);//��������ַ��ĸ��� 
//	printf("%d %d",i1,i2);
	FILE *fp=fopen("mycat.cpp","r");
	if(fp){
		int num;
		fscanf(fp,"%d",&num);
		printf("%d",num);
		fclose(fp);
	}else{
		printf("�޷����ļ�"); 
	} 
	return 0; 
} 
