#include<stdio.h>
double add(int n){
	if(n==1){
		return 1.000000;
	}
	else if(n%2==0){
		return 1.000000/n+add(n-1);
	}
	else{
		return -1.000000/n+add(n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	double ans;
	ans=add(n);
	printf("%.6f",ans);
	return 0;
}

