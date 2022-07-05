#ifndef _SORT_H_
#define _SORT_H_
#include<stdio.h>
/*here is the sort fuction and param when we want to use it.*/
void bubble_sort(int a[],int len);
void choose_sort(int a[],int len);
void insert_sort(int a[], int len);
/*	@param a is the list to be sorted
	@param len is the number of elements in a
*/ 
void insert_scanf(int a[], int num_elem);
/* 	@param a is the where we will put the elem in
		@param num_elem number of the elements
		@function scanf the element and sort incidentally
*/
void quick_sort(int a[],int p,int q);
/* 	@param a is the list to be sorted
	@param p is the first index
	@param q is the last inedx
*/ 
void merge_split(int a[], int begin, int end);
/* 	@param a is the list to be sorted
	@param begin = the first index + 1
	@param end = the last index +1
*/ 

/*here we learn different methods of sorting*/
/* quick sort*/
int quick_spilt(int a[],int p,int q){
	int low=p;
	int high=q-1;
	int pivot=a[q];
	while(1){
		//low go forward(right) 
		while(a[low]<pivot){
			low++;
		};
		while(a[high]>pivot){
			high--;
		}
		if(low>=high){
			break;
		}else{
			int temp=a[low];
			a[low]=a[high];
			a[high]=temp;
			low++;
			high--;
		}
	}
	a[q]=a[low];
	a[low]=pivot;
	return low;
}
void quick_sort(int a[],int p,int q){
	int par;
	if(q<=p){
		return;
	}else{
		par=quick_spilt(a,p,q);
		quick_sort(a,p,par-1);
		quick_sort(a,par+1,q);
	}
}
/*merge sort*/
void merge_merge(int a[], int begin, int mid, int end) {
	int numL = mid - begin + 1;
	int numR = end - mid;
	int lefta[numL+1], righta[numR+1 ];
	for (int i = 0; i < numL; i++) {
		lefta[i] = a[begin - 1 + i];
	}
	lefta[numL] = 2147483647;

	for (int i = 0; i < numR; i++) {
		righta[i] = a[mid + i];
	}
	righta[numR] = 2147483647;

	int i = 0, j = 0;
	for (int k = begin; k <= end; k++) {
		/*when compare, our i or j will
		be beyond their area to compare the
		outside value, we make it the max int
		so inside the array is still our elements*/
		if (lefta[i] <= righta[j]) {
			a[k - 1 ] = lefta[i++];
		} else {
			a[k - 1 ] = righta[j++];
		}
	}
}
void merge_split(int a[], int begin, int end) {
	/*merge means combine together*/
	int mid;
	if (a == NULL || begin > end || begin == end) {
		return;
	}
	mid = (begin + end) / 2;
	merge_split(a, begin, mid);
	merge_split(a, mid + 1, end);
	merge_merge(a, begin, mid, end);
}
/*bubble sort*/
void bubble_sort(int a[],int len){
	/*you can imagine every time a large bubble
	will rise to the end if the array*/ 
	for(int i=0;i<len;i++){
		for(int j=0;j+i<len-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
/*choose sort*/
void choose_sort(int a[],int len){
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
/*insertion sort*/
void insert_sort(int a[], int len) {
	int insert_elem = 0;
	int position = 0;
	for (int i = 1; i < len; i++) {
		/*begin from the second element to process
		because we don't care who is NO.1 */
		/*build a varieation to store the value
		and the position of a[i]*/
		insert_elem = a[i];
		position = i;
		/*you can imagine it is a push box game, we
		get a hole in the second element, and push
		the former element into this hole if it is
		qualified*/
		while (position > 0 && a[position - 1] > insert_elem) {
			a[position] = a[position - 1];
			position--;
		}
		/*put the element back into the hole*/
		if (position != i) {
			a[position] = insert_elem;
		}
	}
}
void insert_scanf(int a[], int num_elem) {
	/* 	@param a is the where we will put the elem in
		@param num_elem number of the elements
		@function scanf the element and sort incidentally
	*/
	int cnt = 0;
	struct {
		int v;//insert_elem
		int p;//position
	} box;
	while (cnt < num_elem) {
		scanf("%d", &a[cnt++]);
		if (cnt >= 2) { /*if we have two elems or above*/
			box.v = a[cnt - 1];
			box.p = cnt - 1;
			while (box.p > 0 && a[box.p - 1] > box.v) {
				a[box.p] = a[box.p - 1];
				box.p--;
			}
			a[box.p] = box.v;
		}
	}
}

#endif
