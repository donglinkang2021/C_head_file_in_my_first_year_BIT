#include<stdio.h>
int main(){
	int len,n,max=0;	 
	//��ʼ���� 
	printf("�������鳤��\n");
	scanf("%d",&len); 
	int a[len];
	printf("�����������е�����\n��ÿ����һ�����ְ�һ�λس���\n");
	for(n=0;n<len;n++)
		scanf("%d",&a[n]);
	
	//ѭ��ÿ�������Ǹ��ҳ��� 
	for(int i=0;i<len;i++)
	{if(max<a[i]){max=a[i];
		//TODO
	}
		
	}	
	//������		
	printf("%d",max);
	
		}
