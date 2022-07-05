#include<stdio.h>
//尝试用for输出图形 
//由输出我们可以知道，两个for之间的i并不会造成互相干扰，因为在int过后都是内部的循环
int main(){
	for(int i=0;i<10;i++){
		for( int j=0;j<i;j++){
				printf("*\n");
			
			
							
			
		}
	} 
}
