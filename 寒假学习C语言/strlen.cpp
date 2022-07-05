#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//strlen
//mylen @strsum//idx:index
//strcmp//-1 0 1
//mycmp//总差值 
//wengkai_cmp//首位差值 
//strcpy
//mycpy//dst:destination;src:search
//wengkai_cpy
//wengkai_cpy_pro
//另外strstr和strcasestr也很有用
//mycat//??? 
//strcat
char *mycpy(char *dst, const char *src) {
//	dst=(char *)malloc(strlen(src)+1);
	for(int i=0;i<strlen(src);i++){
		dst[i]=src[i];
	}
	dst[strlen(src)]='\0';
	return dst;
}
char *wengkai_cpy(char *dst,const char *src){
	int idx=0;
//	dst=(char*)malloc(strlen(src)+1);
	while(src[idx]!='\0'){
		dst[idx]=src[idx];
		idx++;
	}
	dst[idx]='\0';
	return dst;
} 
char *wengkai_cpy_pro(char *dst,const char *src){
	char *ret=dst;
	while(*dst++=*src++);
	*dst='\0';
	return ret;
}
int mylen(char const *s) {
	int idx = 0;
	while (s[idx] != '\0') {
		idx++;
	}
	return idx;
}
int strsum(char const *s) {
	int sum = 0;
	int i = 0;
	while (s[i] != '\0') {
		sum += s[i];
		i++;
	}
	return sum;
}
int mycmp(char const *s1, char const *s2 ) {
	int cmp;
	cmp = strsum(s1) - strsum(s2);
	return cmp;
}
int wengkai_cmp(char const *s1, char const *s2) {
	while (*s1 == *s2 && *s1 != '\0') {
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int main() {
	char a[] = "abc";
	char b[] = "AbC";
	char *c=(char*)malloc(strlen(a)+1);
//	printf("%u\n",mylen(a));
//	printf("%u\n",strlen(a));
	printf("%u\n", mycmp(a, b));
	printf("%d\n", strcmp(a, b));
	printf("%d\n", wengkai_cmp(a, b));
	printf("%s\n", mycpy(c, a));
	free(c);
	printf("%s\n", wengkai_cpy(c, a));
	free(c);
	printf("%s\n", wengkai_cpy_pro(c, a));
	free(c);
//	printf("%s\n",mycat(a,b));
	printf("%s\n",strcat(a,b));
}
