#include<stdio.h>
//�����ֽ�
int main(){
	int a,b,mask=1,bit;
	//input 
	a=0;
	b=a;
	//�����a��λ������������Ӧλ������С�� 
//	do{
//		b/=10;
//		mask*=10;
//		printf("mask=%d,b=%d\n",mask,b);//������mask״��		
//	}while(b>9);//���ڼ�¼mask�ĳ�ʼֵΪ1������b������ʮλ���Ϳ��Խ��� 
	 while(b>9){
	 	b/=10;
		mask*=10;
		//printf("mask=%d,b=%d\n",mask,b);
	 }
	 
	 //�����λ����ȡ��
	 //�����ϲ���ո�Ĺ��� 
	do{
		bit=a/mask;
		printf("%d",bit);
		if(mask>9){
			printf(" ");//������Ϊ�˿�����������֮�����ո���ĩβû�пո� 
		}
		a%=mask;
		mask/=10;
	}while(mask>0);
	return 0;
}
