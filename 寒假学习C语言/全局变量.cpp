#include<stdio.h>
//ȫ�ֱ���
//��̬���ر���ʵ������һ��ȫ�ֱ��� 
/*
��������λ����ͬ���ڴ�����
���Ǿ�̬���ر���ͬʱ����ȫ�ֵ������ںͺ����ڲ��ľֲ�������static�������ؿɷ��ʣ� 
*/
int f(void);
int gAll=12;//û������ʼ����ȫ�ֱ�����õ��㣬ָ���õ�NULL //�����ر�������õ�0
int g2=gAll;//ȫ�ֱ�����Ӧ�ú���һ��ȫ�ֱ�����ϵ��һ�� 
 
int main(){
	printf("in %s gAll=%d,&gAll=%p\n",__func__,gAll,&gAll);
	f();
	f();
	f();
	printf("agn in %s gAll=%d,&gAll=%p\n",__func__,gAll,&gAll);
	return 0;
} 
int f(void){
	static int gAll=1; 
	int k=1;
	printf("in %s k=%d,&k=%p\n",__func__,k,&k);
	printf("in %s gAll=%d,&gAll=%p\n",__func__,gAll,&gAll);
	gAll+=2;
	printf("agn in %s gAll=%d,&gAll=%p\n",__func__,gAll,&gAll);
	return gAll;
}
