#include<stdio.h>
int main(){
	bool isEnd=false;
	int cnt=0,n[10]={0},m[10]={0},i,j,mine[10][110][110]={0},tot=0;
	char temp,Tmine[110][110]={0};
	while(isEnd==false){
		scanf("%d%d",&n[cnt],&m[cnt]);
		if(n[cnt]==0&&m[cnt]==0){
			tot=cnt;
			isEnd=true;
		}
		for(i=1;i<=n[cnt];i++){
			scanf("%s",&Tmine[i]);
			for(j=m[cnt];j>=1;j--){
				Tmine[i][j]=Tmine[i][j-1];
			}
			Tmine[i][0]=0;
		}
		for(i=1;i<=n[cnt];i++){
			for(j=1;j<=m[cnt];j++){
				if(Tmine[i][j]!='*'){
					if(Tmine[i-1][j-1]=='*'){
						mine[cnt][i][j]++;
					}
					if(Tmine[i-1][j]=='*'){
						mine[cnt][i][j]++;
					}
					if(Tmine[i-1][j+1]=='*'){
						mine[cnt][i][j]++;
					}
					if(Tmine[i][j+1]=='*'){
						mine[cnt][i][j]++;
					}
					if(Tmine[i+1][j+1]=='*'){
						mine[cnt][i][j]++;
					}
					if(Tmine[i+1][j]=='*'){
						mine[cnt][i][j]++;
					}
					if(Tmine[i+1][j-1]=='*'){
						mine[cnt][i][j]++;
					}
					if(Tmine[i][j-1]=='*'){
						mine[cnt][i][j]++;
					}
				}
				else if(Tmine[i][j]=='\n'){
					Tmine[i][j]=0;
				}
				else{
					mine[cnt][i][j]=-1;
				}
			}
		}
		cnt++;
	}
	for(cnt=0;cnt<tot;cnt++){
		printf("Field #%d:\n",cnt+1);
		for(i=1;i<=n[cnt];i++){
			for(j=1;j<=m[cnt];j++){
				if(mine[cnt][i][j]==-1){
					printf("*");
				}
				else{
					printf("%d",mine[cnt][i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

