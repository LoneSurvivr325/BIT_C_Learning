#include<stdio.h>
int main(){
	int n,m,mat[100][100]={0},i,j,k,mx=-1,my=-1;
	bool isMax=true,isMin=true;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			for(k=0;k<n;k++){
				if(k!=i&&mat[k][j]<=mat[i][j]){
					isMin=false;
				}
			}
			for(k=0;k<m;k++){
				if(k!=j&&mat[i][k]>=mat[i][j]){
					isMax=false;
				}
			}
			if(isMax==true&&isMin==true){
				mx=i;
				my=j;
			}
			isMax=true;
			isMin=true;
		}
	}
	if(mx==-1&&my==-1){
		printf("No Point\n");
	}
	else{
		printf("Point:a[%d][%d]==%d",mx,my,mat[mx][my]);
	}
	return 0;
}

