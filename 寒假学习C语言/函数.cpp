#include<stdio.h>
//from this chapter, we will use function to replace the program in main()

//judge the solo number 
//function:input a num and judge whether it is solo
int isprime(int i){
	int ret=1;
	for(int j=2;j<i;j++){
		if(i%j==0){
			ret=0;
			break;
		}
	}
	return ret;
}

//�Ժ�main����д����������� 
//����˵����������������ϵ�����֮�ͣ��Ҷ�����һ���ж������ĺ��� 
int main(){
	int a,b,sum=0,cnt=0;
	scanf("%d %d",&a,&b);
	if(a==1){
		a=2;
	} 
	for(int i=a;i<=b;i++){
		if(isprime(i)){
			sum+=i;
			cnt++;	
		}
	}
	printf("%d %d",cnt,sum);
	return 0;
	
} 
