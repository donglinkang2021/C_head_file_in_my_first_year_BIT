#ifndef _NODE_H_
#define _NODE_H_ 
/*�����ڴ������ǿ��ܲ������뵽һ���㹻��������ֲ����ڴ�ռ䣬��ʱ���Ǿ���Ҫ���������ɢ���ڴ�ռ䣬
��ʱ������������Ľṹ��Ͳ�������ǰһ��ֻ��size�͵�ַ����Ҫ�أ����ǻ�Ҫ��ָ��������ɢ�ռ�Ķ����ӽǣ�ָ�룩
�������ǿ�ʼ�������ѧϰ*/
/*Linked list*/
//typedef struct{
//	int size;
//	int *array;
//	int *next_array;
//}Array;//����һ�����ָ�룬�����ǿ��Ը�С 
typedef struct _node{//����ڵ� 
	int value;
	struct _node *next; 
}Node;//������ζ 
#endif
