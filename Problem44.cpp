#include<stdio.h>
int add(int n,int m){
	if(n==m){
		return m;
	}
	else{
		return m+add(n,m-1);
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("The sum from %d to %d is %d",n,m,add(n,m));
	return 0;
}

