#include<stdio.h>
#include<string.h>
#define MAX_LEN 500
void bigIntAdd(const char *a,const char *b,char *result){
    int lenA=strlen(a);
    int lenB=strlen(b);
    int maxLen=(lenA>lenB)?lenA:lenB;
    int carry=0,i,sum;
    int idxA,idxB,idxR=0;
    char temp[MAX_LEN]={0};
	for(i=0;i<maxLen;i++){
        idxA=lenA-1-i;
        idxB=lenB-1-i;
        int digitA=(idxA>=0)?(a[idxA]-'0'):0;
        int digitB=(idxB>=0)?(b[idxB]-'0'):0;
        sum=digitA+digitB+carry;
        temp[idxR++]=(sum%10)+'0';
        carry=sum/10;
    }
    if(carry!=0){
    	temp[idxR++]=carry+'0';
	}
    for(i=0;i<idxR;i++){
        result[i]=temp[idxR-1-i];
    }
    result[idxR]='\0';
}
int main(){
	int start,end,i;
	char fib[101][MAX_LEN]={0};
    strcpy(fib[1],"1");
    strcpy(fib[2],"1");
    for(i=3;i<=100;i++) {
        bigIntAdd(fib[i-1],fib[i-2],fib[i]);
    }
	scanf("%d%d",&start,&end);
	printf("%s",fib[end-start+1]);
	return 0;
}
