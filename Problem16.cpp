#include<stdio.h>
void adv_print(int i){
	if(i<=9){
		printf("  %d",i);
	}
	else if(i>=10&&i<=99){
		printf(" %d",i);
	}
	else{
		printf("%d",i);
	}
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=1;j<=n;j++){
			adv_print(n*i+j);
		}
		printf("\n");
	}
	return 0;
}

