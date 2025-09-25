#include<stdio.h>
int Carry(int *num){
	int i,temp;
	for(i=0;i<=100000;i++){
		temp=num[i]/10;
		num[i+1]+=temp;
		num[i]-=10*temp;
	}
}
int main(){
	int num[100000],a,n,i,j,temp[100000];
	bool isUnder1000;
	isUnder1000=true;
	for(i=0;i<100000;i++){
		num[i]=0;
		temp[i]=0;
	}
	num[0]=1;
	scanf("%d%d",&a,&n);
	if(n==0){
		printf("The last 3 numbers is 1.\n");
	}
	else{
		for(i=1;i<=n;i++){
			for(j=0;j<100000;j++){
				num[j]*=a;
			}
			Carry(num);
		}
		for(i=3;i<100000;i++){
			if(num[i]!=0){
				isUnder1000=false;
			}
		}
		printf("The last 3 numbers is ");
		if(isUnder1000==true){
			if(num[2]!=0){
				printf("%d%d%d.\n",num[2],num[1],num[0]);
			}
			else if(num[1]!=0){
				printf("%d%d.\n",num[1],num[0]);
			}
			else{
				printf("%d.\n",num[0]);
			}
		}
		else{
			printf("%d%d%d.\n",num[2],num[1],num[0]);
		}
	}
	return 0;
}

