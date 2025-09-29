#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,delta;
	double re1,re2,im;
	scanf("%d%d%d",&a,&b,&c);
	delta=b*b-4*a*c;
	if(a==0&&b==0){
		printf("Input error!\n");
	}
	else if(a==0&&b!=0){
		if(c!=0){
			re1=(-1.000000*c)/b;
			printf("x=%.6f\n",re1);
		}
		else{
			printf("x=0.000000\n");
		}
	}
	else{
		if(delta>0){
			re1=(sqrt(delta)-b)/(2.000000*a);
			re2=(-sqrt(delta)-b)/(2.000000*a);
			printf("x1=%.6f\nx2=%.6f\n",re1,re2);
		}
		else if(delta==0){
			re1=-b/(2.000000*a);
			printf("x1=x2=%.6f\n",re1);
		}
		else{
			re1=-b/(2.000000*a);
			im=sqrt(-delta)/(2.000000*a);
			if(re1==0.000000){
				printf("x1=%.6fi\nx2=-%.6fi\n",im,im);
			}
			else{
				printf("x1=%.6f+%.6fi\nx2=%.6f-%.6fi\n",re1,im,re1,im);
			}
		}
	}
	return 0;
}

