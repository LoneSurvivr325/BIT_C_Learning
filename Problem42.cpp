#include<stdio.h>
int getJan1(int y){
	int i,temp;
	temp=1;
	for(i=1900;i<y;i++){
		if((i%4==0&&i%100!=0)||i%400==0){
			temp+=2;
		}
		else{
			temp++;
		}
	}
	return temp%7;
}
int main(){
	int y,i,cnt;
	scanf("%d",&y);
	int d[13];
	cnt=0;
	for(i=0;i<13;i++){
		d[i]=0;
	}
	d[0]=getJan1(y);
	d[1]=(d[0]+12)%7;
	d[2]=(d[1]+31)%7;
	if((i%4==0&&i%100!=0)||i%400==0){
		d[3]=(d[2]+29)%7;
	}
	else{
		d[3]=(d[2]+28)%7;
	}
	d[4]=(d[3]+31)%7;
	d[5]=(d[4]+30)%7;
	d[6]=(d[5]+31)%7;
	d[7]=(d[6]+30)%7;
	d[8]=(d[7]+31)%7;
	d[9]=(d[8]+31)%7;
	d[10]=(d[9]+30)%7;
	d[11]=(d[10]+31)%7;
	d[12]=(d[11]+30)%7;
	for(i=1;i<=12;i++){
		if(d[i]==5){
			cnt++;
		}
	}
	printf("There are %d Black Fridays in year %d.\nThey are:\n",cnt,y);
	for(i=1;i<=12;i++){
		if(d[i]==5){
			printf("%d/%d/13\n",y,i);
		}
	}
	return 0;
}

