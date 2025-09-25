#include<stdio.h>
int main(){
	char a[100],b[100];
	int i,j,cnt;
	bool isSame;
	cnt=0;
	isSame=false;
	for(i=0;i<100;i++){
		a[i]='\0';
		b[i]='\0';
	}
	scanf("%s",&a);
	for(i=0;i<100;i++){
		isSame=false;
		for(j=0;j<100;j++){
			if(a[i]==b[j]&&a[i]!='\0'){
				isSame=true;
			}
		}
		if(isSame==false){
			b[cnt]=a[i];
			cnt++;
		}
		else{
			a[i]='\0';
		}
	}
	for(i=0;i<100;i++){
		if(a[i]!='\0'){
			printf("%c",a[i]);
		}
	}
	printf("\n");
	return 0;
}

