#include<stdio.h>
int main(){
	int op,N,i,j,k,l,cnt=0;
	scanf("%d%d",&op,&N);
	int a[100000]={0},b[100000]={0},temp[100000]={0};
	if(op==1){
		for(i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<N;i++){
			for(j=0;j<i;j++){
				if(a[i]>a[j]){
					cnt++;
				}
			}
			b[i]=cnt;
			cnt=0;
		}
		printf("%d",b[0]);
		for(i=1;i<N;i++){
			printf(" %d",b[i]);
		}
		printf("\n");
	}
	else{
		for(i=0;i<N;i++){
			scanf("%d",&b[i]);
			temp[i]=i;
		}
		for(i=N-1;i>=0;i--){
			a[i]=temp[b[i]];
			for(j=b[i];j<N;j++){
				temp[j]=temp[j+1];
			}
		}
		printf("%d",a[0]);
		for(i=1;i<N;i++){
			printf(" %d",a[i]);
		}
		printf("\n");
	}
	return 0;
}

