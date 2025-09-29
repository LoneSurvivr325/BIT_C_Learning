#include<stdio.h>
int main(){
	int n,i;
	double ans=0.000000;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		ans+=1.000000/i;
	}
	printf("sum=%.6f\n",ans);
	return 0;
}

