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

void show(struct date today){//��������нṹ��Ϊ���������Ǵ���ַ��ȥ�������¹����ṹ������ֵ 
	printf("%d-%d-%d\n", today.year, today.month, today.day);
}
struct date getstr(void){//���ǿ�����������һ������������ֵ�������ô���ַ���ṹָ�룩��ȥ�ٸı䣬������̫���� 
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
	scanf("%d",&a->month);//(*a).month=a->month//a��ָ�� 
	printf("day:");
	scanf("%d",&a->day);
	printf("year:");
	scanf("%d",&a->year);
	return a;
}; 

int main() {
	struct date today = {01, 26, 2022};
	struct date *p_date=&today;//����������һ��ָ��struct date��ָ�� 
	struct date tomorrow = {.month = 01, .year = 2022};//������ĳ�ʼ�����
//	struct date day=getstr();
	struct date day={0};
	getstr_pro(&day);
//	day=(struct date){01,27,2022};//����ת��
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
//	printf("&today.month:%p\n",&today.month);//���﷢���˽ṹ�ĵ�ַ��Ȼ�Ƕ���ĵ�һ�������ĵ�ַ��������һ�� 
//	printf("&today.year:%p\n",&today.year);
	}
