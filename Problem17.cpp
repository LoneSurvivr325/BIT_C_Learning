#include<stdio.h>
int main(){
	int n,m;
	scanf("%d",&n);
	m=0;
	while(1){
		m++;
		if(m*(m+1)/2>=n){
			break;
		}
	}
	printf("%d\n",m);
	return 0;
}

