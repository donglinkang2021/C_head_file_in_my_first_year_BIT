#include<stdio.h>
//����
void cheer(int i){
	printf("cheer %d\n",i);
} 
//������������ʦҲ˵���Ǻ������������Ǻ����ı����ռ� 
void swap(int i,int j/*�βΣ�����*/){ 
	int temp=i;
	i=j;
	j=temp;
} 
int main(){
	cheer(2.4);
	int a=5;
	int b=6;
	swap(a,b/*ʵ�Σ�ֵ*/);/*����������Ҳ������C������ֻ�ǰ�ֵ�����˺�������û�жԱ���������ַ�����Ӱ��,
	Ҳ����˵�������������ô�ֻ���ñ����ϵ�ֵȥ�ӹ�����*/
	printf("%d %d",a,b);
	return 0;
}
