#include<stdio.h>
//���Թ������������
//����ֻ��һ�����ȣ������Ǽ�¼���������ʱ�������е�ֲ�����֪��������������� 
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
//	printf("%d",a[1]); //���Ƿ������Ȼ�ǿ��е� 
	return 0;
} 
