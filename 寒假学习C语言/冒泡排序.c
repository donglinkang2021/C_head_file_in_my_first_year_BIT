#include<stdio.h> 
int len=0;

int structure_2(int a[],int j){
	int temp;
	while(a[j]>a[j+1]){
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
}

int structure_1(int a[],int i){
	int j;
	for(j=0;j<len-1-i;j++)
		structure_2(a[len],j);
					
}

int main(){
	//开始输入 
	int a[len],i;
	printf("请输数组长度\n");
	scanf("%d",&len); 
	printf("请输入数组中的数字\n（每输入一个数字按一次回车）\n");
	for(i=0;i<len;i++)
		scanf("%d",&a[i]);
	
	
	//开始循环
	//int b=0;
	//for(b;b<len-1;b++)
	//	structure_1(a[len],i);
	//输出结果	
	//int k;	
	//for(k=0;k<len;k++);
	//	printf("%d\t",a[k]);
	int j;
	
	for(i=0;i<len-1;i++)
		for(j=0;j<len-1-i;j++)
				structure_2(a[len],j);	
	
	for(i=0;i<len;i++)//测试输出数组 
		printf("%d\t",a[i]) ;
		
	
			
}
