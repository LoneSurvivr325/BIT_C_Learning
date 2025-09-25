#include<stdio.h>
int main(){
	char a;
	int n,i,j;
	scanf("%c%d",&a,&n);
	for(i=1;i<=n-1;i++){
		printf(" ");
	}
	printf("%c\n",a);
	for(i=2;i<=n;i++){
		if(a=='Z'){
			a='A';
		}
		else{
			a++;
		}
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("%c",a);
		for(j=1;j<=2*i-3;j++){
			printf(" ");
		}
		printf("%c\n",a);
	}
	for(i=n-1;i>=2;i--){
		if(a=='A'){
			a='Z';
		}
		else{
			a--;
		}
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("%c",a);
		for(j=1;j<=2*i-3;j++){
			printf(" ");
		}
		printf("%c\n",a);
	}
	for(i=1;i<=n-1;i++){
		printf(" ");
	}
	if(a=='A'){
		a='Z';
	}
	else{
		a--;
	}
	printf("%c\n",a);
	return 0;
}

