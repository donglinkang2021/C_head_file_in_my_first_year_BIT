#include<stdio.h>
//struct in struct
struct point{//一个点肯定有两条边 
	int x;
	int y;
}; 
struct rectangle{//矩形 左上角的点和右下角的点 
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
