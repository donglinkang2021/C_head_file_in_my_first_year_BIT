#ifndef _STURCT_REVIEW_H_ 
#define _STURCT_REVIEW_H_  
/*
这个文档用来复习结构体，或者写一些头文件的原函数 
*/

//用union查看真正的内存 
typedef union{//CHC这样我们可以访问到char里面的内存 
	char value;
	char mem[sizeof(char)];
}CHC; 
typedef union{//CHI这样我们可以访问到int里面的内存 
	int value;
	char mem[sizeof(int)];
}CHI;
typedef union{//CHL这样我们可以访问到long里面的内存 
	long value;
	char mem[sizeof(long)];
}CHL;
typedef union{//CHF这样我们可以访问到float里面的内存 
	float value;
	char mem[sizeof(float)];
}CHF;
typedef union{//CHD这样我们可以访问到double里面的内存 
	double value;
	char mem[sizeof(double)];
}CHD;


#endif
