#include<stdio.h>
//尝试构建无穷大数组
//数组只有一个长度，但还是记录溢出的数据时，所以有点恐怖，不知道改了哪里的数据 
int main(){int n=1,m=0;
	int i=0;
	int a[n],b[m];
	do{
		scanf("%d",&a[i]);
		i++;
		n++;
	}while(a[i-1]!=-1);
	for(int j=0;j<n-2;j++){
		printf("%d\t",a[j]);
	}
//	int a[0];
//	a[1]=9;
//	printf("%d",a[1]); //我们发现这居然是可行的 
	return 0;
} 
