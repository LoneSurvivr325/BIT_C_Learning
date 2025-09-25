#include<stdio.h>
int main(){
	int n[12],temp1,temp2,temp3;
	scanf("%d%d%d",&temp1,&temp2,&temp3);
	n[0]=temp1;
	n[1]=temp2/10000;
	n[2]=temp2/1000-10*n[1];
	n[3]=temp2/100-10*n[2]-100*n[1];
	n[4]=temp2/10-10*n[3]-100*n[2]-1000*n[1];
	n[5]=temp2%10;
	n[6]=temp3/10000;
	n[7]=temp3/1000-10*n[6];
	n[8]=temp3/100-10*n[7]-100*n[6];
	n[9]=temp3/10-10*n[8]-100*n[7]-1000*n[6];
	n[10]=temp3%10;
	n[11]=9-((n[0]+n[2]+n[4]+n[6]+n[8]+n[10])*3+(n[1]+n[3]+n[5]+n[7]+n[9])-1)%10;
	printf("%d\n",n[11]);
	return 0;
}

