#include<stdio.h>


//阶乘 
//擅用调试和输出改进代码 
//写这个程序的主要目的是为了测试一下while与for写起来的手感是咋样的 
int product=1,product_2=1;



void jiecheng(int n){
	for(int j=1;j<n+1;j++){
		product*=j;
	}
	printf("jiecheng=%d\n",product);
	//在这里j++是在执行循环体之后才进行，所以与while不太一样。 
	//这时我们写成j<=n也是可以的，只要满足执行n次就可以 
} 


void jiecheng_2(int n){
	for(n=n;n>0;n--){
		product_2*=n;
		//TODO
	}
	printf("jiecheng_2=%d\n",product);
	//反向阶乘来玩一下 
}

int main(){
	int n=0,i=0,m=1;
	printf("Please input number n\n");
	scanf("%d",&n); 
	
	jiecheng(n);
	jiecheng_2(n);
	
	while(i<n){
		i++;
		m*=i;
	}
	printf("while=%d\n",m);
	return 0;
}
