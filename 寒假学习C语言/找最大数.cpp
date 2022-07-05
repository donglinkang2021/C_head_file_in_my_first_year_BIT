#include<stdio.h>

//排序第一步寻找最大数
//虽说直接把排序写出来了额。。。。。。
//但也可以说寻找最大数只是排序算法的一个副产品 
//但是找最大数应该还有其它算法，经数学验证n个数中找最大数最少只需n-1次，最多n*(n-1)/2次 
//网上查了一下这个应该叫选择排序 

int main(){
	int len,n,c;	 
	//开始输入 
	printf("请输数组长度\n");
	scanf("%d",&len); 
	int a[len];
	printf("请输入数组中的数字\n（每输入一个数字按一次回车）\n");
	for(n=0;n<len;n++)
		scanf("%d",&a[n]);
	
	//循环每次循环把最小或最大的那个放在最左端 
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(a[i]>a[j])
			{c=a[i];
			a[i]=a[j];
			a[j]=c;
			}
		}
	}	
	//输出结果		
	for(int f=0;f<len;f++)
		printf("%d\t",a[f]);
		
		
		
	
	
	
}
