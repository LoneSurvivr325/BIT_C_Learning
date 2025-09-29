#include<stdio.h>
struct point{
	int x;
	int y;
};
int getArea(point a,point b,point c){
	point vec1,vec2;
	vec1.x=b.x-a.x;
	vec1.y=b.y-a.y;
	vec2.x=c.x-a.x;
	vec2.y=c.y-a.y;
	return (vec1.x*vec2.y-vec1.y*vec2.x>0)?(vec1.x*vec2.y-vec1.y*vec2.x):-1*(vec1.x*vec2.y-vec1.y*vec2.x);
}
void printArea(int a){
	if(a%2==0){
		printf("%d.0\n",a/2);
	}
	else{
		printf("%d.5\n",a/2);
	}
}
int main(){
	int n,i,j,k,l,max=0;
	scanf("%d",&n);
	int m[n]={0};
	int ans[n]={0};
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
		point p[m[i]];
		for(j=0;j<m[i];j++){
			scanf("%d%d",&p[j].x,&p[j].y);
		}
		max=0;
		for(j=0;j<m[i];j++){
			for(k=j+1;k<m[i];k++){
				for(l=k+1;l<m[i];l++){
					if(max<getArea(p[j],p[k],p[l])){
						max=getArea(p[j],p[k],p[l]);
					}
				}
			}
		}
		ans[i]=max;
	}
	for(i=0;i<n;i++){
		printArea(ans[i]);
	}
	return 0;
}

