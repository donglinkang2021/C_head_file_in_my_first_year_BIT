#include<stdio.h>
//整数分解
int main(){
	int a,b,mask=1,bit;
	//input 
	a=0;
	b=a;
	//先求出a的位数，并生成相应位数的最小数 
//	do{
//		b/=10;
//		mask*=10;
//		printf("mask=%d,b=%d\n",mask,b);//输出检查mask状况		
//	}while(b>9);//由于记录mask的初始值为1，所以b在数完十位数就可以结束 
	 while(b>9){
	 	b/=10;
		mask*=10;
		//printf("mask=%d,b=%d\n",mask,b);
	 }
	 
	 //从最高位依次取数
	 //并符合插入空格的规则 
	do{
		bit=a/mask;
		printf("%d",bit);
		if(mask>9){
			printf(" ");//这里是为了控制两个数字之间插入空格，且末尾没有空格 
		}
		a%=mask;
		mask/=10;
	}while(mask>0);
	return 0;
}
