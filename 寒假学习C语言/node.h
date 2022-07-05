#ifndef _NODE_H_
#define _NODE_H_ 
/*由于内存中我们可能不能申请到一块足够大的连续分布的内存空间，这时我们就需要充分利用离散的内存空间，
这时，我们所定义的结构体就不能像以前一样只有size和地址两个要素，我们还要有指向其它离散空间的独特视角（指针）
所以我们开始了链表的学习*/
/*Linked list*/
//typedef struct{
//	int size;
//	int *array;
//	int *next_array;
//}Array;//这是一个大的指针，但我们可以更小 
typedef struct _node{//定义节点 
	int value;
	struct _node *next; 
}Node;//套娃内味 
#endif
