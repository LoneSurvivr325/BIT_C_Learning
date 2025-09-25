#include<stdio.h>
bool isDivide(int k,int n){
	int n1,n2,n3;
	n1=n/100;
	n2=n/10-(n/10000)*1000;
	n3=n%1000;
	if(n1%k==0&&n2%k==0&&n3%k==0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int k,i;
	scanf("%d",&k);
	for(i=10000;i<=30000;i++){
		if(isDivide(k,i)==true){
			printf("%d\n",i);
		}
	}
	return 0;
}

