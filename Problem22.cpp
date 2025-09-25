#include<stdio.h>
int main(){
	char input[100000],op;
	int num[100000],max,min,cnt1,cnt2,i,res;
	cnt1=0;
	cnt2=0;
	max=0;
	min=10;
	for(i=0;i<100000;i++){
		input[i]=0;
		num[i]=0;
	}
	scanf("%s",&input);
	while(true){
		if(input[cnt1]>='0'&&input[cnt1]<='9'){
			num[cnt2]=input[cnt1]-'0';
			cnt2++;
		}
		else if(input[cnt1]=='+'||input[cnt1]=='-'||input[cnt1]=='*'||input[cnt1]=='/'){
			op=input[cnt1];
		}
		else if(input[cnt1]=='='){
			break;
		}
		cnt1++;
	}
	for(i=0;i<cnt2;i++){
		if(num[i]>=max){
			max=num[i];
		}
		if(num[i]<=min){
			min=num[i];
		}
	}
	switch(op){
		case'+':
			res=max+min;
			break;
		case'-':
			res=max-min;
			break;
		case'*':
			res=max*min;
			break;
		case'/':
			if(min!=0){
				res=max/min;
				break;
			}
			break;
	}
	if(min==0&&op=='/'){
		printf("Error!\n");
	}
	else{
		printf("%d%c%d=%d",max,op,min,res);
	}
	return 0;
}

