#include<stdio.h>
//������ָ��
int main(){
	int a[]={1,2,3,4,5};
	printf("*a=%d\n",*a);
	printf("a=%p\n",a);
	printf("&a=%p\n",&a);//����˵�����������ֻ�ǿ��Կ���һ��const_array�����������array,��Ϊ����&a������const_arrayһ����һ���Լ��ĵ�ַ 
	printf("a[0]=%d\n",a[0]);
	printf("&a[0]=%p\n",&a[0]);
	int const*p=a;//����׵�ַ 
	printf("p[4]=%d\n",p[4]);//���������һ������ָ�룬������������ֵ 
	printf("*(p+4)=%d\n",*(p+4));//�����������ǵȼ۵� 
	printf("*p=%d\n",*p); 
	printf("p=%p\n",p);
	printf("&p=%p\n",&p);

} 
