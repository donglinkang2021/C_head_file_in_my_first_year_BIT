#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//mycat
char* mycat(char *dst,char const *src){
	char *sum=(char*)malloc(strlen(dst)+strlen(src)+1);
//	while(dst){
//		*sum=*dst;
//		sum++;
//		dst++;
//	}
	for(int i=0;i<strlen(dst);i++){
		sum[i]=dst[i];
	}
//	while(src){
//		*sum=*src;
//		sum++;
//		src++;
//	}
//	*sum='\0';
	for(int i=0;i<=strlen(src);i++){
		sum[strlen(dst)+i]=src[i];
	}
	return sum;

}
//char* mycat_origin(char *dst,char *src){
//	char *sum=(char*)malloc(strlen(dst)+strlen(src)+1);
//	while(*sum++=*dst++);
//	while(*sum++=*src++);
//	return sum;
//}
char* othercat(char *dst,char const *src){
	char *ret=dst;
	dst+=strlen(dst);
	while(*dst++=*src++);
	return ret;
	 
}
int main(){
	char a[]="13424243243243";
	char b[]="!!!!sdfwy9vtn";
//	printf("%s",mycat_origin(a,b));
	printf("%s",othercat(a,b));	
}
