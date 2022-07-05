#include<stdio.h>
int main(){
	//int i,j;//来探究一下for里面声明的变量是否为局部变量 
	
	
	for (int i=0; i++<10;  ){
		printf("for ( i=0; i++<10;  )中的i=%d\n",i);
	}
	//printf("final_i=%d\n",i); //这是在循环体之前加一 
	for(int j=0;j<10;j++){
		//TODO
		printf("for ( j=0; j<10;j++  )中的j=%d\n",j);
	} 
	//printf("final_j=%d",j);//这是在循环体之后加一
	//我们发现final_i和final_j都报错了，那么如果用两遍会怎么样呢
	for(int i=0;i<10;i++){
		printf("%d\n",i); 
			//TODO
		//TODO
	} 

	//所以说想循环的话，只要不是当全局变量声明，可以反复利用,比如
	for(int i=0;i<10;i++){
		for(int i=0;i<10;i++){
			
			printf("*\t");
			//TODO
		}
		//TODO
	} 
} 
