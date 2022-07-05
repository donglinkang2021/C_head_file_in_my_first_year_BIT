#include<stdio.h>
/*search 
@search_key;
@search_array;
@search_len_array;
*/
int search(int key,int a[],int len){
	int ret=-1;
	for(int i=0;i<len;i++){
		if(key==a[i]){
			ret=i;
			break;
		}
	}
	return ret;
}
int main(){
	int b[]={1,3,9,4,5,6,7,8,};
	int r=search(6,b,sizeof(b)/sizeof(b[0]));
	
	
}
