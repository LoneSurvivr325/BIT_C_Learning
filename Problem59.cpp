#include<stdio.h>
int isRight(int p){
	int _p=2*p,__p=3*p,i;
	bool flag=true,f[10];
	for(i=1;i<10;i++){
		f[i]=false;
	}
	if(p>=334){
		return 0;
	}
	f[p/100]=true;
	f[p/10-10*(p/100)]=true;
	f[p%10]=true;
	f[_p/100]=true;
	f[_p/10-10*(_p/100)]=true;
	f[_p%10]=true;
	f[__p/100]=true;
	f[__p/10-10*(__p/100)]=true;
	f[__p%10]=true;
	for(i=1;i<10;i++){
		if(f[i]==false){
			flag=false;
		}
	}
	return (flag==false)?0:1;
}
int main(){
	int a,i,j;
	bool isExist=false;
	scanf("%d",&a);
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			if(isRight(a*100+i*10+j)==1){
				isExist=true;
				printf("%d,%d,%d\n",(a*100+i*10+j),(a*100+i*10+j)*2,(a*100+i*10+j)*3);
			}
		}
	}
	if(isExist==false){
		printf("0,0,0\n");
	}
	return 0;
}

