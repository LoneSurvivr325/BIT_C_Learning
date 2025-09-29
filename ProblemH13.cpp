#include<stdio.h>
#include<string.h>
//4 types:number,capital letter,letter,other characters
int main(){
	bool isNum=false,isCap=false,isLet=false,isOth=false;
	int cnt=0,n,i,j,len;
	char pswd[100000][20]={0};
	scanf("%d\n",&n);
	i=0;
	j=0;
	while(i<n){
		pswd[i][j]=getchar();
		if(pswd[i][j]=='\n'){
			pswd[i][j]=0;
			i++;
			j=0;
		}
		else{
			j++;
		}
	}
	for(i=0;i<n;i++){
		len=strlen(pswd[i]);
		cnt=0;
		isNum=false;
		isCap=false;
		isLet=false;
		isOth=false;
		for(j=0;j<len;j++){
			if(pswd[i][j]>='0'&&pswd[i][j]<='9'){
				if(isNum==false){
					isNum=true;
					cnt++;
				}
			}
			else if(pswd[i][j]>='A'&&pswd[i][j]<='Z'){
				if(isCap==false){
					isCap=true;
					cnt++;
				}
			}
			else if(pswd[i][j]>='a'&&pswd[i][j]<='z'){
				if(isLet==false){
					isLet=true;
					cnt++;
				}
			}
			else{
				if(isOth==false){
					isOth=true;
					cnt++;
				}
			}
		}
		if(len<6||cnt<2){
			printf("Not safe\n");
		}
		else if(cnt==2){
			printf("Medium safe\n");
		}
		else{
			printf("Safe\n");
		}
	}
	return 0;
}

