#include<stdio.h>
//Ϊ�������ṹ������һ������ 
enum colors{red=1,green,blue=5,numofcolors};//С��·��ö�ٵ�����һ������ 

void f(enum colors c);

int main(){
	enum colors t=numofcolors;
//	scanf("%d",&t);
	f(t);
	return 0;
	
} 

void f(enum colors c){
	printf("%d",c);
}
