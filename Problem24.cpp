#include<stdio.h>
int main(){
	int h,max,min,i,j;
	scanf("%d",&h);
	max=h*2-1;
	min=1;
	for(i=1;i<=h;i++){
		if(i==1){
			for(j=min;j<=max;j++){
				printf("*");
			}
			printf("\n");
		}
		else if(i==h){
			for(j=1;j<h;j++){
				printf(" ");
			}
			printf("*\n");
		}
		else{
			for(j=1;j<min;j++){
				printf(" ");
			}
			printf("*");
			for(j=min+1;j<=max-1;j++){
				printf(" ");
			}
			printf("*\n");
		}
		max--;
		min++;
	}
	return 0;
}

