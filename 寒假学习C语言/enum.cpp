#include<stdio.h>
//为了引出结构而讲的一个东西 
enum colors{red=1,green,blue=5,numofcolors};//小套路：枚举的最后放一个总数 

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
