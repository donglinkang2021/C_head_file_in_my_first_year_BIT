#include<stdio.h>
int main(){
	int len,n,max=0;	 
	//开始输入 
	printf("请输数组长度\n");
	scanf("%d",&len); 
	int a[len];
	printf("请输入数组中的数字\n（每输入一个数字按一次回车）\n");
	for(n=0;n<len;n++)
		scanf("%d",&a[n]);
	
	//循环每次最大的那个找出来 
	for(int i=0;i<len;i++)
	{if(max<a[i]){max=a[i];
		//TODO
	}
		
	}	
	//输出结果		
	printf("%d",max);
	
		}
