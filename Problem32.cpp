#include<stdio.h>
#include<string.h>
int main(){
	char c[100000],temp;
	int i,j,len;
	for(i=0;i<100000;i++){
		c[i]='\0';
	}
	scanf("%s",&c);
	len=strlen(c);
	for(i=0;i<len-1;i++){
		for(j=0;j<len-1-i;j++){
			if(c[j]<c[j+1]){
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	printf("%s\n",c);
	return 0;
}

