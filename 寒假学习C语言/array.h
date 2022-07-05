#ifndef _ARRAY_H_
#define _ARRAY_H_ 
/*
resizable array
	growable
	get the current size
	access to the elements
@array_create�������� 
@array_free
@array_size
@array_at
@array_inflate 
*/
//typedef struct{
//	int *array;
//	int size;
//}*Array;
/*��Ϊ�ܶ�ط����Ǵ��ṹ��ָ�룬���ǲ���һ��ʼ�Ͷ���ArrayΪָ��,�����������������Ǵ��챾�ر���,
���Һܶ�ʱ�����ǵ�һ�ۿ���ʱ�������뵽���Ǹ�ָ��*/ 
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
 
