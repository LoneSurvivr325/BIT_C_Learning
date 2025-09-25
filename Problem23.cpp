#include<stdio.h>
int isPrime(int p){
	int i;
	bool _p;
	_p=true;
	for(i=2;i<p;i++){
		if(p%i==0){
			_p=false;
		}
	}
	return (_p==true)?1:0;
}
int main(){
	int rng,i;
	scanf("%d",&rng);
	for(i=rng;i>=1;i--){
		if(isPrime(i)==1){
			printf("The max prime number is %d.\n",i);
			break;
		}
	}
	return 0;
}

