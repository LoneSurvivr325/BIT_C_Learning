#include<stdio.h>
void printc(char c){
	if(c>'Z'){
		printc(c-26);
	}
	else if(c<'A'){
		printc(c+26);
	}
	else{
		printf("%c",c);
	}
}
int main(){
	char c;
	int n,i,j;
	scanf("%d %c",&n,&c);
	if(c<'A'||c>'Z'){
		printf("input error.\n");
	}
	else{
		for(i=0;i<n-1;i++){
			for(j=0;j<i;j++){
				printf(" ");
			}
			printc(c+n-1-i);
			for(j=0;j<2*n-3-2*i;j++){
				printf(" ");
			}
			printc(c+n-1-i);
			printf("\n");
		}
		for(i=0;i<n-1;i++){
			printf(" ");
		}
		printf("%c\n",c);
		for(i=0;i<n-1;i++){
			for(j=0;j<n-2-i;j++){
				printf(" ");
			}
			printc(c-i-1);
			for(j=0;j<2*i+1;j++){
				printf(" ");
			}
			printc(c-i-1);
			printf("\n");
		}
	}
	return 0;
}

