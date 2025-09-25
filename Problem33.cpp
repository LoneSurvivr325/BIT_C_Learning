#include<stdio.h>
int main(){
	int n,cnt,i;
	cnt=1;
	scanf("%d",&n);
	for(i=n-1;i>=1;i--){
		cnt+=i;
		cnt*=2;
	}
	printf("The monkey got %d peaches in first day.\n",cnt);
	return 0;
}

