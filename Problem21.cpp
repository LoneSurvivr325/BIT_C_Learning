#include<stdio.h>
int isSpecial(int i){
	int a1,a2,a3,a4;
	a1=i%10;
	a2=(i%100-i%10)/10;
	a3=(i%1000-i%100)/100;
	a4=i/1000;
	if(a1==a2||a1==a3||a1==a4||a2==a3||a2==a4||a3==a4){
		return 0;
	}
	else{
		return 1;
	}
}
void getSpecial(int min,int max){
	int i,cnt;
	cnt=0;
	for(i=min;i<=max;i++){
		if(i%2==0){
			if(isSpecial(i)==1){
				cnt++;
				printf("%d  ",i);
			}
		}
	}
	printf("\ncounter=%d\n",cnt);
}
int main(){
	int min[10000],max[10000],i,cnt;
	i=0;
	cnt=0;
	for(i=0;;i++){
		scanf("%d%d",&min[i],&max[i]);
		cnt++;
		if(min[i]==0||max[i]==0){
			cnt--;
			break;
		}
	}
	for(i=0;i<cnt;i++){
		if(min[i]%10000==min[i]&&max[i]%10000==max[i]&&min[i]>=1000&&max[i]>=1000&&min[i]<=max[i]){
			getSpecial(min[i],max[i]);
		}
		else{
			printf("Error\n");
		}
	}
	return 0;
}

