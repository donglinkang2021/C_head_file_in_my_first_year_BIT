#include<stdio.h>
//struct in struct
struct point{//һ����϶��������� 
	int x;
	int y;
}; 
struct rectangle{//���� ���Ͻǵĵ�����½ǵĵ� 
	struct point pt1;
	struct point pt2;
};
int main(){
	struct rectangle a,*rp;
	a={{1,2},{3,4}};
	rp=&a;
//	struct point b;
//	b={1,2};
	printf("%d,%d,%d,%d\n",a.pt1.x,a.pt1.y,a.pt2.x,a.pt2.y);
	printf("%d,%d,%d,%d,%d\n",a.pt1.x,(*rp).pt1.x,rp->pt1.x,(a.pt1).x,(rp->pt1).x);
	
	return 0;
	
} 
