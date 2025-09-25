#include<stdio.h>
int main(){
	int n,i,j,op,x,y,pos[10][10];
	op=1;//1=right,2=down,3=leftdown,4=rightup;
	x=0;
	y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			pos[i][j]=0;
		}
	}
	for(i=0;i<n*n;i++){
		pos[x][y]=i+1;
		switch(op){
			case 1:
				x++;
				if(y==0){
					op=3;
				}
				else if(y==n-1){
					op=4;
				}
				break;
			case 2:
				y++;
				if(x==0){
					op=4;
				}
				else if(x==n-1){
					op=3;
				}
				break;
			case 3:
				x--;
				y++;
				if(y==n-1){
					op=1;
				}
				else if(x==0){
					op=2;
				}
				break;
			case 4:
				x++;
				y--;
				if(x==n-1){
					op=2;
				}
				else if(y==0){
					op=1;
				}
				break;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%2d",pos[j][i]);
			if(j!=n-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

