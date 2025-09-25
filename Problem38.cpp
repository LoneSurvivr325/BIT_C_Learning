#include<stdio.h>
int main(){
	char s[80],t[80];
	int i,j;
	bool isDel[80];
	for(i=0;i<80;i++){
		s[i]='\0';
		t[i]='\0';
		isDel[i]=false;
	}
	scanf("%s%s",&s,&t);
	for(i=0;i<80;i++){
		for(j=0;j<80;j++){
			if(s[i]==t[j]){
				isDel[i]=true;
			}
		}
	}
	for(i=0;i<80;i++){
		if(isDel[i]==false&&s[i]!='\0'){
			printf("%c",s[i]);
		}
	}
	printf("\n");
	return 0;
}

