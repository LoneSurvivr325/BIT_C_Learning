#include<stdio.h>
int main(){
	int n,m,i,j,cnt=-1;
	scanf("%d%d",&n,&m);
	int s[n+1];
	for(i=0;i<n;i++){
		s[i]=i+1;
	}
	s[n]=0;
	for(i=0;i<n-1;i++){
		cnt+=m;
		while(cnt>=n-i){
			cnt-=(n-i);
		}
		s[cnt]=0;
		for(j=cnt;j<n;j++){
			s[j]=s[j+1];
		}
		cnt--;
	}
	printf("The left child is No %d.\n",s[0]);
	return 0;
}

