#include<stdio.h>
//��
#define _DEBUG//��������������� 
#define PI 3.14159265
#define Format "%f\n"
#define PI2 2*PI
#define PRT printf(Format,PI);\
	printf(Format,PI2);
int main() {
	PRT
	printf("%s\n",__FILE__); 
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
	printf("%d\n",__LINE__);
	printf("%d\n",__STDC__);
	
	return 0;

}
