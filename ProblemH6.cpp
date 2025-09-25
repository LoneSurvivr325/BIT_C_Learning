#include<stdio.h>
int main(){
	int p[4],i,j,k,l,m,max;
	bool isAble[100000],temp;
	temp=true;
	max=0;
	for(i=0;i<4;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<100000;i++){
		isAble[i]=false;
	}
	for(i=0;i<4;i++){
		isAble[p[i]]=true;
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			isAble[p[i]+p[j]]=true;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				isAble[p[i]+p[j]+p[k]]=true;
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				for(l=0;l<4;l++){
					isAble[p[i]+p[j]+p[k]+p[l]]=true;
				}
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				for(l=0;l<4;l++){
					for(m=0;m<4;m++){
						isAble[p[i]+p[j]+p[k]+p[l]+p[m]]=true;
					}
				}
			}
		}
	}
	for(i=1;i<100000;i++){
		if(isAble[i]==false&&temp==true){
			max=i-1;
			temp=false;
		}
	}
	printf("The max is %d.\n",max);
	return 0;
}

