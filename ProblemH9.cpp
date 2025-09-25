#include<stdio.h>
#include<string.h>
int pow10(int n){
	int i,temp;
	temp=1;
	for(i=0;i<n;i++){
		temp*=10;
	}
	return temp;
}
int getRes(int max,int min,char op){
	switch(op){
		case'+':
			return max+min;
		case'-':
			return max-min;
		case'*':
			return max*min;
		case'/':
			return max/min;
		case'%':
			return max%min;
	}
}
int main(){
	int i=0,j=0,k=0;
	int len[10]={0};
	int val[10]={0};
	char num[10][10]={0};
	bool flag=true;
	scanf("%c",&num[0][0]);
	while(flag==true){
		while(num[k][i]!=','){
			len[k]++;
			i++;
			scanf("%c",&num[k][i]);
		}
		k++;
		i=0;
		scanf("%c",&num[k][0]);
		if(num[k][0]=='='){
			flag=false;
		}
	}
	for(i=0;i<k-1;i++){
		if(num[i][0]!='-'){
			for(j=0;j<len[i];j++){
				val[i]+=(num[i][j]-'0')*pow10(len[i]-j-1);
			}
		}
		else{
			for(j=1;j<len[i];j++){
				val[i]+=(num[i][j]-'0')*pow10(len[i]-j-1);
			}
			val[i]*=-1;
		}
	}
	int max=val[0],min=val[0];
	for(i=1;i<k-1;i++){
		if(val[i]>max){
			max=val[i];
		}
		if(val[i]<min){
			min=val[i];
		}
	}
	char op=num[k-1][0];
	if(max<0){
		printf("(%d) %c (%d) = %d\n",max,op,min,getRes(max,min,op));
	}
	else if(min<0){
		printf("%d %c (%d) = %d\n",max,op,min,getRes(max,min,op));
	}
	else{
		printf("%d %c %d = %d\n",max,op,min,getRes(max,min,op));
	}
	return 0;
}

