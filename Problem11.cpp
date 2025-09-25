#include<stdio.h>
int main(){
	int h,m;
	float ang1,ang2,ang0;
	scanf("%d%d",&h,&m);
	ang1=30*h+0.5*m;
	ang2=6*m;
	if(ang1>=ang2){
		ang0=ang1-ang2;
	}
	else{
		ang0=ang2-ang1;
	}
	printf("At %d:",h);
	if(m<10){
		printf("0%d ",m);
	}
	else{
		printf("%d ",m);
	}
	printf("the angle is %.1f degrees.\n",(ang0>=180)?(360-ang0):ang0);
	return 0;
}

