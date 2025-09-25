#include<stdio.h>
int main(){
	int a,n,i,j;
	scanf("%d%d",&a,&n);
	int num[3*n-3];
	num[0]=a;
	for(i=1;i<3*n-3;i++){
		num[i]=(num[i-1]+1)%10;
	}
	for(i=0;i<n;i++){
		if(i==0){
			for(j=0;j<n;j++){
				printf("%d",num[j]);
			}
		}
		else if(i==n-1){
			printf("%d",num[2*i]);
		}
		else{
			printf("%d",num[3*n-3-i]);
			for(j=0;j<n-i-2;j++){
				printf(" ");
			}
			printf("%d",num[n-1+i]);
		}
		printf("\n");
	}
	return 0;
}

