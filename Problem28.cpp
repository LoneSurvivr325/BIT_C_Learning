#include<stdio.h>
int main(){
	char c;
	int n,i,j;
	scanf("%c%d",&c,&n);
	for(i=1;i<=n;i++){
		if(i==1){
			for(j=1;j<n;j++){
				printf(" ");
			}
			printf("%c\n",c);
		}
		else{
			for(j=1;j<=n-i;j++){
				printf(" ");
			}
			printf("%c",c+i-1);
			for(j=1;j<=2*i-3;j++){
				printf(" ");
			}
			printf("%c\n",c+i-1);
		}
	}
	for(i=n-1;i>=1;i--){
		if(i==1){
			for(j=1;j<n;j++){
				printf(" ");
			}
			printf("%c\n",c);
		}
		else{
			for(j=1;j<=n-i;j++){
				printf(" ");
			}
			printf("%c",c+i-1);
			for(j=1;j<=2*i-3;j++){
				printf(" ");
			}
			printf("%c\n",c+i-1);
		}
	}
	return 0;
}

