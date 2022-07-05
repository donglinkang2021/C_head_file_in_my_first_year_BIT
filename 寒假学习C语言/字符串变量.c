#include<stdio.h>
//×Ö·û´®±äÁ¿
int main() {
	char *str = "Hello";
	char word[] = "Hello";
	char line[10] = "Hello";
	printf("%s\n", str);
	printf("%d\n", sizeof(word) / sizeof(word[0]));
	printf("%d\n", sizeof(line) / sizeof(line[0]));
	
	char string1[8];
	char string2[8];
	scanf("%7s", string1);
	scanf("%7s", string2);
	printf("%s##%s##", string1,string2);



}
