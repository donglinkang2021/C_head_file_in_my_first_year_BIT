#include<stdio.h>
//文件
int main(){
//	printf("%9d\n",123);
//	printf("%-9d\n",123);
//	printf("%-+9d\n",-123);//+可以认为是如果是正数则强制输出+号，如果是负数则输出-号而不输出+号 
//	printf("%+9d\n",123);
//	printf("% 9d\n",123);
//	printf("%09d\n",123);
//	printf("%9.3f\n",123.0);
//	printf("%*d\n",6,123);
//	printf("%*d\n",3,123);//*给格式带来很大的灵活性
//	printf("%hhd\n",12345);//12345--->十六进制3039--->取一个字节39（低位在前）--->十进制为57 
//	printf("%lld%n\n",123452342342,&num); 
//	printf("%d\n",num);
//	scanf("%*d%d",&num);//这里的*是跳过第一个所读的意思 
//	printf("%d\n",num);
//	int num;
//	int i1,i2;
//	i1=scanf("%i",&num);//返回读入变量的个数 
//	i2=printf("%d\n",num);//返回输出字符的个数 
//	printf("%d %d",i1,i2);
	FILE *fp=fopen("mycat.cpp","r");
	if(fp){
		int num;
		fscanf(fp,"%d",&num);
		printf("%d",num);
		fclose(fp);
	}else{
		printf("无法打开文件"); 
	} 
	return 0; 
} 
