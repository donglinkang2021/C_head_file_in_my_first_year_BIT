#include<stdio.h>
//对结构的研究
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
	printf("%u=%u+%u+%u?\n",sizeof(a),sizeof(a.a),sizeof(a.b),sizeof(a.c));//多了3 
	printf("a:%p a.a:%p a.b:%p a.c:%p\n",&a,&a.a,&a.b,&a.c);
	printf("%u=%u+%u+%u+%u+%u?\n",sizeof(b),sizeof(b.a),sizeof(b.b),sizeof(b.c),sizeof(b.d),sizeof(b.e));//多了4 
	printf("b:%p b.a:%p b.b:%p b.c:%p b.d:%p b.e:%p\n",&b,&b.a,&b.b,&b.c,&b.d,&b.e);
	printf("%u=%u+%u+%u?\n",sizeof(c),sizeof(c.a),sizeof(c.b),sizeof(c.c));//多了3 
	printf("c:%p c.a:%p c.b:%p c.c:%p\n",&c,&c.a,&c.b,&c.c);//指针地址为元素首地址，连续排列 
	printf("%u=%u+%u?\n",sizeof(d),sizeof(d.a),sizeof(d.b));
	printf("d:%p d.a:%p d.b:%p\n",&d,&d.a,&d.b);
	/*
	猜测1：结构的sizeof与结构中的变量类型有关； 
	猜测2：若结构类型全部一致，则sizeof即为所有类型之和，比如所有四个元素都是int,则是16字节；
	若结构类型中有一个与其它不一样，则sizeof为所有类型之和加上元素个数；经验证猜想2不正确 
	猜测3：当结构中有连续不满4个char类型时，分配给它的都是4个字节地址;
	猜测4：当结构中只有一个char时,和最临近的前面那个类型的大小一样；
	猜测5：当结构中优先级高的在前面则后面默认使用优先级高的地址的大小，比如double在int前则是16；
	若int在double前也是12； 
	*/ 
}
