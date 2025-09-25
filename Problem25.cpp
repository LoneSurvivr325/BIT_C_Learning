#include<stdio.h>
int abs(int i){
	return (i<0)?-i:i;
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++){
		for(j=0;j<2*n-1-abs(n-1-i);j++){
			if(abs(n-1-i)+abs(n-1-j)>=n){
				printf("  ");
			}
			else{
				if(abs(n-1-i)+abs(n-1-j)>=9){
					printf("%d",abs(n-1-i)+abs(n-1-j)+1);
				}
				else{
					printf("%d ",abs(n-1-i)+abs(n-1-j)+1);
				}
			}
		}
		printf("\n");
	}
	return 0;
}

