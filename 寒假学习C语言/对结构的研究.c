#include<stdio.h>
//�Խṹ���о�
struct structure0 {
	double a;	
	char b;
};
struct structure1 {
	char a;	
	double b;
	char c;
};
struct structure2 {
	int a;
	int b;
	double c;
	int d;
	int e;
};
struct structure3 {
	int a;
	int b;
	char c;
};
int main() {
	struct structure1 a;
	struct structure2 b;
	struct structure3 c;
	struct structure0 d; 
	printf("%u=%u+%u+%u?\n",sizeof(a),sizeof(a.a),sizeof(a.b),sizeof(a.c));//����3 
	printf("a:%p a.a:%p a.b:%p a.c:%p\n",&a,&a.a,&a.b,&a.c);
	printf("%u=%u+%u+%u+%u+%u?\n",sizeof(b),sizeof(b.a),sizeof(b.b),sizeof(b.c),sizeof(b.d),sizeof(b.e));//����4 
	printf("b:%p b.a:%p b.b:%p b.c:%p b.d:%p b.e:%p\n",&b,&b.a,&b.b,&b.c,&b.d,&b.e);
	printf("%u=%u+%u+%u?\n",sizeof(c),sizeof(c.a),sizeof(c.b),sizeof(c.c));//����3 
	printf("c:%p c.a:%p c.b:%p c.c:%p\n",&c,&c.a,&c.b,&c.c);//ָ���ַΪԪ���׵�ַ���������� 
	printf("%u=%u+%u?\n",sizeof(d),sizeof(d.a),sizeof(d.b));
	printf("d:%p d.a:%p d.b:%p\n",&d,&d.a,&d.b);
	/*
	�²�1���ṹ��sizeof��ṹ�еı��������йأ� 
	�²�2�����ṹ����ȫ��һ�£���sizeof��Ϊ��������֮�ͣ����������ĸ�Ԫ�ض���int,����16�ֽڣ�
	���ṹ��������һ����������һ������sizeofΪ��������֮�ͼ���Ԫ�ظ���������֤����2����ȷ 
	�²�3�����ṹ������������4��char����ʱ����������Ķ���4���ֽڵ�ַ;
	�²�4�����ṹ��ֻ��һ��charʱ,�����ٽ���ǰ���Ǹ����͵Ĵ�Сһ����
	�²�5�����ṹ�����ȼ��ߵ���ǰ�������Ĭ��ʹ�����ȼ��ߵĵ�ַ�Ĵ�С������double��intǰ����16��
	��int��doubleǰҲ��12�� 
	*/ 
}
