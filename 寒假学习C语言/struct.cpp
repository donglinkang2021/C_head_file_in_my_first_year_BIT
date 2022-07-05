#include<stdio.h>
//struct
struct date {
//	int second;
//	int minute;
//	int hour;
	int month;
	int day;
	int year;
};

void show(struct date today){//这个函数中结构作为参数并不是传地址过去，而是新构建结构并复制值 
	printf("%d-%d-%d\n", today.year, today.month, today.day);
}
struct date getstr(void){//我们可以这样设置一个函数来输入值，而不用传地址（结构指针）进去再改变，但这样太大了 
	struct date temp;
	printf("month:");
	scanf("%d",&temp.month);
	printf("day:");
	scanf("%d",&temp.day);
	printf("year:");
	scanf("%d",&temp.year);
	return temp;
}; 
struct date* getstr_pro(struct date* a){
	printf("month:");
	scanf("%d",&a->month);//(*a).month=a->month//a是指针 
	printf("day:");
	scanf("%d",&a->day);
	printf("year:");
	scanf("%d",&a->year);
	return a;
}; 

int main() {
	struct date today = {01, 26, 2022};
	struct date *p_date=&today;//读作：声明一个指向struct date的指针 
	struct date tomorrow = {.month = 01, .year = 2022};//和数组的初始化差不多
//	struct date day=getstr();
	struct date day={0};
	getstr_pro(&day);
//	day=(struct date){01,27,2022};//类型转换
//	day=today; 
//	today.month=01;
//	today.day=26;
//	today.year=2022;
	show(today);
	show(tomorrow);
	show(day);
	
//	printf("%d\n",p_date->day);
	
//	printf("&today:%p\n",&today);
//	printf("&today.day:%p\n",&today.day);
//	printf("&today.month:%p\n",&today.month);//这里发现了结构的地址依然是定义的第一个变量的地址，和数组一样 
//	printf("&today.year:%p\n",&today.year);
	}
