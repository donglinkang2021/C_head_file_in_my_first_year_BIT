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
	//��ʼ���� 
	int a[len],i;
	printf("�������鳤��\n");
	scanf("%d",&len); 
	printf("�����������е�����\n��ÿ����һ�����ְ�һ�λس���\n");
	for(i=0;i<len;i++)
		scanf("%d",&a[i]);
	
	
	//��ʼѭ��
	//int b=0;
	//for(b;b<len-1;b++)
	//	structure_1(a[len],i);
	//������	
	//int k;	
	//for(k=0;k<len;k++);
	//	printf("%d\t",a[k]);
	int j;
	
	for(i=0;i<len-1;i++)
		for(j=0;j<len-1-i;j++)
				structure_2(a[len],j);	
	
	for(i=0;i<len;i++)//����������� 
		printf("%d\t",a[i]) ;
		
	
			
}
