#include<stdio.h>
int main(){
	int n;//10*0.1+12*0.5+9*1=16
	scanf("%d",&n);
	if(n%8==0){
		printf("%d,%d,%d\n",n*50/8,n*60/8,n*45/8);
	}
	else{
		printf("No change.\n");
	}
	return 0;
}

