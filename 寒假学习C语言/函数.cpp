#include<stdio.h>
//from this chapter, we will use function to replace the program in main()

//judge the solo number 
//function:input a num and judge whether it is solo
int isprime(int i){
	int ret=1;
	for(int j=2;j<i;j++){
		if(i%j==0){
			ret=0;
			break;
		}
	}
	return ret;
}

//以后main都是写在最下面的了 
//比如说我想计算两个区间上的素数之和，我定义了一个判断素数的函数 
int main(){
	int a,b,sum=0,cnt=0;
	scanf("%d %d",&a,&b);
	if(a==1){
		a=2;
	} 
	for(int i=a;i<=b;i++){
		if(isprime(i)){
			sum+=i;
			cnt++;	
		}
	}
	printf("%d %d",cnt,sum);
	return 0;
	
} 
