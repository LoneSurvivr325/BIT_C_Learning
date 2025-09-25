#include<stdio.h>
int pow2(int n){
	int i,temp;
	temp=1;
	for(i=0;i<n;i++){
		temp*=2;
	}
	return temp;
}
int main(){
	int l[6],i,j,ans;
	bool isLine[7];
	for(i=0;i<7;i++){
		isLine[i]=false;
		if(i<6){
			l[i]=0;
		}
	}
	i=0;
	ans=0;
	while(1){
		scanf("%d",&l[i]);
		if(l[i]==0){
			break;
		}
		i++;
	}
	for(i=0;i<6;i++){
		if(l[i]!=0){
			isLine[l[i]]=true;
		}
	}
	for(i=1;i<=6;i++){
		if(isLine[i]==true){
			ans+=(pow2(i)/2);
		}
	}
	printf("%d\n",ans);
	return 0;
}

