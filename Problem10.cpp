#include<stdio.h>
int calc_s(int s1,int s2,int f1,int f2,char op){
	if(op=='+'){
		return s1*f2+s2*f1;
	}
	else if(op=='-'){
		return s1*f2-s2*f1;
	}
	else if(op=='*'){
		return s1*s2;
	}
	else{
		return s1*f2;
	}
}
int calc_f(int s1,int s2,int f1,int f2,char op){
	if(op=='/'){
		return f1*s2;
	}
	else{
		return f1*f2;
	}
}
int calc_div(int s,int f){
	int i,div;
	for(i=1;i<=f;i++){
		if(s%i==0&&f%i==0){
			div=i;
		}
	}
	return div;
}
int main(){
	int s0,f0,s1,s2,f1,f2,div0;
	char op;
	scanf("%d/%d %c %d/%d",&s1,&f1,&op,&s2,&f2);
	s0=calc_s(s1,s2,f1,f2,op);
	f0=calc_f(s1,s2,f1,f2,op);
	div0=calc_div(s0,f0);
	s0/=div0;
	f0/=div0;
	printf("%d/%d %c %d/%d = ",s1,f1,op,s2,f2);
	if(f0==1){
		printf("%d\n",s0);
	}
	else{
		printf("%d/%d\n",s0,f0);
	}
	return 0;
}

