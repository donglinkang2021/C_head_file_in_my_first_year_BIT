#ifndef _STURCT_REVIEW_H_ 
#define _STURCT_REVIEW_H_  
/*
����ĵ�������ϰ�ṹ�壬����дһЩͷ�ļ���ԭ���� 
*/

//��union�鿴�������ڴ� 
typedef union{//CHC�������ǿ��Է��ʵ�char������ڴ� 
	char value;
	char mem[sizeof(char)];
}CHC; 
typedef union{//CHI�������ǿ��Է��ʵ�int������ڴ� 
	int value;
	char mem[sizeof(int)];
}CHI;
typedef union{//CHL�������ǿ��Է��ʵ�long������ڴ� 
	long value;
	char mem[sizeof(long)];
}CHL;
typedef union{//CHF�������ǿ��Է��ʵ�float������ڴ� 
	float value;
	char mem[sizeof(float)];
}CHF;
typedef union{//CHD�������ǿ��Է��ʵ�double������ڴ� 
	double value;
	char mem[sizeof(double)];
}CHD;


#endif
