#include<stdio.h>
int main(){
	int n,num[100000]={0},i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	if(n%2==0){
		for(i=0;i<n/2;i++){
			printf("%d ",num[i]*num[n-1-i]);
		}
		printf("\n");
	}
	else{
		for(i=0;i<n/2;i++){
			printf("%d ",num[i]*num[n-1-i]);
		}
		printf("%d \n",num[n/2]);
	}
	return 0;
}

