#ifndef _ARRAY_H_
#define _ARRAY_H_ 
/*
resizable array
	growable
	get the current size
	access to the elements
@array_create创建数组 
@array_free
@array_size
@array_at
@array_inflate 
*/
//typedef struct{
//	int *array;
//	int size;
//}*Array;
/*因为很多地方都是传结构的指针，我们不妨一开始就定义Array为指针,但是这样不利于我们创造本地变量,
而且很多时候人们第一眼看到时不容易想到它是个指针*/ 
typedef struct{
	int *array;
	int size;
}Array;
Array array_create(int init_size);
void array_free(Array *a);
int array_size(const Array *a);
int* array_at(Array *a,int index);
void array_inflate(Array *a,int more_size);
#endif
 
