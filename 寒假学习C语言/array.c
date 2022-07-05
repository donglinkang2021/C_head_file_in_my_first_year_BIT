#include"array.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
const int BLOCK_SIZE=20;


//typedef struct{
//	int *array;
//	int size;
//}Array;

Array array_create(int init_size){
	Array a;
	a.size=init_size;
	a.array=(int*)malloc(sizeof(int)*a.size);
	return a;
}

void array_free(Array *a){
	free(a->array);
	a->array=NULL;
	a->size=0;
}
//封装 （把内部的程序保护起来了） 
int array_size(const Array *a){
	return a->size;
}

int* array_at(Array *a,int index){
	if(index>=a->size){
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);//这样写是因为不知道以后调用时会直接访问远超一个Block以外的元素，比如这样写了以后，可以直接写在160的地方，但是初始值只有100 
	}
	return &(a->array[index]); 
}

void array_inflate(Array *a,int more_size){
	int *p=(int*)malloc(sizeof(int)*(a->size+more_size));
//	for(int i=0;i<a->size;i++){
//		p[i]=a->array[i];
//	}//这段可以用memcpy,void *memcpy(void *str1, const void *str2, size_t n),按字节复制<string.h> 
	memcpy((void*)p,(void*)a->array,a->size*sizeof(int));
	free(a->array);
	a->array=p;
	a->size+=more_size;
}
int main(){
	Array a=array_create(100);
//	printf("%d\n",array_size(&a));
//	*array_at(&a,0)=10;
//	printf("%d\n",*array_at(&a,0));
	int cnt=0;
	while(*array_at(&a,cnt-1)!=-1){
		scanf("%d",array_at(&a,cnt++));
	}
	for(int i=0;i<a.size;i++){
		printf("%p:%d\n",&a.array[i]/*array_at(&a,i)*/,a.array[i]/**array_at(&a,i)*/);
	}
	array_free(&a);
	return 0;//总而言之发现写一个可变数组还是挺麻烦的 
}
