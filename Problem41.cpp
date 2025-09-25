#include<stdio.h>
int main(){
	int n,m;//DragonHead&Student
	int i,j,temp,ans;
	scanf("%d%d",&n,&m);
	int head[n],man[m];//HeadHeight&StudentHeight
	bool isCut[n];
	for(i=0;i<n;i++){
		scanf("%d",&head[i]);
		isCut[i]=false;
	}
	for(i=0;i<m;i++){
		scanf("%d",&man[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(head[j]>head[j+1]){
				temp=head[j];
				head[j]=head[j+1];
				head[j+1]=temp;
			}
		}
	}
	for(i=0;i<m-1;i++){
		for(j=0;j<m-1-i;j++){
			if(man[j]>man[j+1]){
				temp=man[j];
				man[j]=man[j+1];
				man[j+1]=temp;
			}
		}
	}
	temp=0;
	ans=0;
	if(n>m){
		printf("bit is doomed!\n");
	}
	else{
		for(i=0;i<n;i++){
			for(j=temp;j<m;j++){
				if(man[j]>=head[i]){
					ans+=man[j];
					isCut[i]=true;
					temp=j+1;
					break;
				}
			}
		}
		if(isCut[n-1]==false){
			printf("bit is doomed!\n");
		}
		else{
			printf("%d\n",ans);
		}
	}
	return 0;
}

