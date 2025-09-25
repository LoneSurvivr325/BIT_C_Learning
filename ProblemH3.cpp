#include<stdio.h>
int main(){
	int n,i,j,op,x,y,pos[10][10];
	op=1;//1=right,2=down,3=left,4=up;
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
				if(x+y==n-1){
					op=2;
				}
				break;
			case 2:
				y++;
				if(x==y){
					op=3;
				}
				break;
			case 3:
				x--;
				if(x+y==n-1){
					op=4;
				}
				break;
			case 4:
				y--;
				if(x==y-1){
					op=1;
				}
				break;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d",pos[j][i]);
		}
		printf("\n");
	}
	return 0;
}

