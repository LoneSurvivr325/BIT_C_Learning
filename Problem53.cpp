#include<stdio.h>  
int leap_year(int year){   
	return ((year%4==0&&year%100!=0)||year%400==0)?1:0;  
}  
int year_days(int year){
	return leap_year(year)?366:365;  
}
int days(int year,int month,int day){
	int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i;  
	if(leap_year(year)&&month>2){
		day++;
	}
    for(i=1;i<month;i++){
    	day+=months[i];
	}
	return day;  
}  
int main(){
	int y1,y2,m1,m2,d1,d2,n1,n2,dis,i;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	n1=days(y1,m1,d1);
	n2=days(y2,m2,d2);
	if(y1==y2){
		dis=n2-n1;
	}
	else{
		n1*=-1;
		n1+=year_days(y1);
		for(i=2;i<=y2-y1;i++){
			n1+=year_days(y1+i-1);
		}
		dis=n1+n2;
	}
	if(dis==1){
		printf("1 day\n");
	}
	else{
		printf("%d days\n",dis);
	}
	return 0;
}
