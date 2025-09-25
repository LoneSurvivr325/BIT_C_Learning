#include<stdio.h>
#include<math.h>
int isArmstrong(int n,int num){
    int sum=0,temp=num;
    while(temp!=0){
        sum+=pow(temp%10,n);
        temp/=10;
    }
    return (sum==num)?1:0;
}
void findArmstrongNumbers(int start,int end,int n){
	bool success;
	success=false;
    for(int i=start;i<=end;i++){
        if(isArmstrong(n,i)==1){
        	success=true;
            printf("%d\n",i);
        }
    }
    if(success==false){
    	printf("No output.\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
    findArmstrongNumbers(pow(10,n-1),pow(10,n)-1,n);
    return 0;
}
