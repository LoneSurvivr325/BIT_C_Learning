#include<stdio.h>
int main(){
	int n,i,j,cnt;
	cnt=1;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		printf("  ");
	}
	printf(" 1\n");
	for(i=2;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("  ");
		}
		for(j=1;j<i;j++){
			printf("%2d",cnt);
			cnt++;
		}
		for(j=1;j<=i;j++){
			printf("%2d",cnt);
			cnt--;
		}
		cnt++;
		printf("\n");
	}
	return 0;
}

