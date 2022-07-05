#include<stdio.h>

//算俩个时间时间差 
//在运行中遇到无法解决的问题：明明只有俩个scanf却要输入三次??? 
int main(){
	int hour1=0,minute1=0;
	int hour2=0,minute2=0;
	
	printf("Please input _h_min as the first time number,such as 6h5min\n");
	scanf("%dh%dmin",&hour1,&minute1);//发现了在scanf中输入\n是大忌：见scanf探究 
	printf("Please input the next number, make sure that it is bigger!\n");
	printf("Please input _h_min as the second time number,such as 6h5min\n");
	scanf("%dh%dmin",&hour2,&minute2);

	int time1=60*hour1+minute1;
	int time2=60*hour2+minute2;	
	
	double the_distance_hour=(time2-time1)/60;
	double the_distance_min=(time2-time1)%60;
	
		
	printf("时间差是\n%fh%fmin",the_distance_hour,the_distance_min);
	
	
	return 0;
}
 
