#include<stdio.h>


//�׳� 
//���õ��Ժ�����Ľ����� 
//д����������ҪĿ����Ϊ�˲���һ��while��forд�������ָ���զ���� 
int product=1,product_2=1;



void jiecheng(int n){
	for(int j=1;j<n+1;j++){
		product*=j;
	}
	printf("jiecheng=%d\n",product);
	//������j++����ִ��ѭ����֮��Ž��У�������while��̫һ���� 
	//��ʱ����д��j<=nҲ�ǿ��Եģ�ֻҪ����ִ��n�ξͿ��� 
} 


void jiecheng_2(int n){
	for(n=n;n>0;n--){
		product_2*=n;
		//TODO
	}
	printf("jiecheng_2=%d\n",product);
	//����׳�����һ�� 
}

int main(){
	int n=0,i=0,m=1;
	printf("Please input number n\n");
	scanf("%d",&n); 
	
	jiecheng(n);
	jiecheng_2(n);
	
	while(i<n){
		i++;
		m*=i;
	}
	printf("while=%d\n",m);
	return 0;
}
