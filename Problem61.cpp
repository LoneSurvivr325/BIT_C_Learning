#include<stdio.h>
int main(){
	int n,l[100]={0},start=0,end=0,maxl=1,i,j,temp=1;
	bool isSame=true;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&l[i]);
	}
	for(i=0;i<n;i++){
		j=i;
		while(isSame==true&&j<n){
			if(l[j]==l[j+1]){
				temp++;
				j++;
			}
			else{
				isSame=false;
			}
		}
		isSame=true;
		if(maxl<temp){
			maxl=temp;
			start=i;
			end=j;
		}
		temp=1;
	}
	if(maxl==1){
		printf("No equal number list.\n");
	}
	else{
		printf("The longest equal number list is from %d to %d.\n",start,end);
	}
	return 0;
}

