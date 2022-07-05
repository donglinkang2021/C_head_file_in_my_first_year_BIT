#include<stdio.h>
//对结构的研究下
struct structure4{
	char a;
	int b;
	double c;
}; 
 
int main(){
	struct structure4 k;
//	k=(struct structure4){"Ohhhhhh","<@^_^@>",2.0};
	printf("%u=%u+%u+%u?\n",sizeof(k),sizeof(k.a),sizeof(k.b),sizeof(k.c));
	printf("k:%p k.a:%p k.b:%p k.c:%p\n",&k,&k.a,&k.b,&k.c);
//	printf("%s %s %lf",k.a,k.b,k.c );
	
}
