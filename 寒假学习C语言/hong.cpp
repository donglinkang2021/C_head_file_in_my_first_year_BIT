#include<stdio.h>
//宏
#define _DEBUG//用来做条件编译的 
#define PI 3.14159265
#define Format "%f\n"
#define PI2 2*PI
#define PRT printf(Format,PI);\
	printf(Format,PI2)//末尾不要加分号 
#define cube(x) ((x)*(x)*(x))
#define RADTODEG1(x) (x*57.29578)
#define RADTODEG2(x) (x)*57.29578
#define RADTODEG(x) ((x)*57.29578)//正确写法 @整个值要括号 @参数出现的地方要括号 
#define MIN(a,b) ((a)>(b)?(b):(a))
int main() {
//	PRT;
//	printf("%s\n", __FILE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%d\n", __LINE__);
//	printf("%d\n", __STDC__);
//	int i=1;
//	printf("%d\n",cube(++i));//这个说明了是先执行两个之间的乘法在执行乘于第三个 
	printf("%f\n%f\n",180/RADTODEG1(1),RADTODEG2(5+2));
	printf("%f\n%f\n",180/RADTODEG2(1),RADTODEG1(5+2));//替换时发生不应该发生的错误 
	printf("%f\n%f\n",180/RADTODEG(1),RADTODEG(5+2));
//	printf("%d",i);
	return 0;
 
}
