#include<stdio.h>
//数组储存月份
int main() {
//	char *a[] = {"January", "February", "March",
//	             "April", "May", "June",
//	             "July", "August", "September",
//	             "October", "Novemver", "December"
//	            };
//	int b = 0;
//	scanf("%d", &b);
//	printf("%s", a[b - 1]);
//	return 0;
	char*a="ABC";
//	printf("%p:%c,%d:%c,%d:%c,%d:%c",a,a,a[0],a[0],a[1],a[1],a[2],a[2]);
//	do
//	{printf（“%d”,*s%10）;s++;
//	}while（*s）;
	do{
		printf("%d",*a%10);a++;
	}while(*a);
	
	
	

}
