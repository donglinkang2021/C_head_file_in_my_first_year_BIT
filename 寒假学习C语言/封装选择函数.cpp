#include<stdio.h>
//��װѡ������
/*@rank*/
/*@swap*/
//��������Ԫ�صĵ�ַ�ϵ�ֵ�������ǽ�����ַ 
void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
} 
//�Ƚϱ�����ַ�ϵ�ֵ�����ź���ѡ������ͨ��������ַ�ϵ�ֵ������
void rank(int* a[],int len){
	for(int i=len-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(*a[j]>*a[i]){
//				int temp =*a[j];
//				*a[j]=*a[i];
//				*a[i]=temp;
				swap(a[j],a[i]);
			}
		}
	}
}
int main(){
//�����д��������һ�� 
//	int b=2,c=1,d=3;
//	int* a[]={&b,&c,&d};//�����ͺ�����÷���̫һ�����ѵ�ַ����������� 
//	rank(a,sizeof(a)/sizeof(a[0]));
//	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
//		printf("%d\n",*a[i]);
//	}
	int a[]={1,2,7,4,5,8,9,3,12};
	int len=sizeof(a)/sizeof(a[0]);
	//����ָ����� 
	int* b[len];
	//������a��һ����Ԫ�ص�ַ����b 
	for(int i=0;i<len;i++){
		b[i]=&a[i]; 
	}
//	//�������ԭ��ַ���������Ƿ������ǰ�������ĵ�ַ�������û�з�������������ȥswap��ͷ���� 
//	for(int i=0;i<len;i++){
//		printf("%p\t",&a[i]);
//	}
//	printf("\n"); 
	//���� 
	rank(b,len);
	//output ������ 
	for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	 printf("\n");
//	for(int i=0;i<len;i++){
//		printf("%p\t",b[i]);
//	}
//	�������������b��һ�����ǵĵ�ַ���ֻ����������еģ����ǲ���˵��֮ǰ�����������еģ�
//ʵ����֤������ַȷʵ���������еģ�ֻ��������д����ʱû���壬�������ǵ�ַ�ϵ�ֵ������ 
	 
	 return 0;

}
 
