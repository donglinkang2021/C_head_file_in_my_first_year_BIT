#include<stdio.h>

//������ʱ��ʱ��� 
//�������������޷���������⣺����ֻ������scanfȴҪ��������??? 
int main(){
	int hour1=0,minute1=0;
	int hour2=0,minute2=0;
	
	printf("Please input _h_min as the first time number,such as 6h5min\n");
	scanf("%dh%dmin",&hour1,&minute1);//��������scanf������\n�Ǵ�ɣ���scanf̽�� 
	printf("Please input the next number, make sure that it is bigger!\n");
	printf("Please input _h_min as the second time number,such as 6h5min\n");
	scanf("%dh%dmin",&hour2,&minute2);

	int time1=60*hour1+minute1;
	int time2=60*hour2+minute2;	
	
	double the_distance_hour=(time2-time1)/60;
	double the_distance_min=(time2-time1)%60;
	
		
	printf("ʱ�����\n%fh%fmin",the_distance_hour,the_distance_min);
	
	
	return 0;
}
 
