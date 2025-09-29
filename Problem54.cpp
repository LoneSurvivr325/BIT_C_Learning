#include<stdio.h>
int main(){
	int sco[10],max=0,i;
	for(i=0;i<10;i++){
		scanf("%d",&sco[i]);
	}
	for(i=0;i<10;i++){
		if(max<sco[i]){
			max=sco[i];
		}
	}
	for(i=0;i<10;i++){
		if(sco[i]==max){
			printf("%d\n",i+1);
		}
	}
	return 0;
}

