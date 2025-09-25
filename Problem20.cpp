#include<stdio.h>
int getcnt_y(int y){
	return (y-1900)*365+(y-1901)/4-(y-1901)/100+(y-1601)/400;
}
int getcnt_m(int y,int m){
	int cnt;
	if(m==1){
		cnt=0;
	}
	else if(m==2){
		cnt=31;
	}
	else if(m==3){
		cnt=59;
	}
	else if(m==4){
		cnt=90;
	}
	else if(m==5){
		cnt=120;
	}
	else if(m==6){
		cnt=151;
	}
	else if(m==7){
		cnt=181;
	}
	else if(m==8){
		cnt=212;
	}
	else if(m==9){
		cnt=243;
	}
	else if(m==10){
		cnt=273;
	}
	else if(m==11){
		cnt=304;
	}
	else{
		cnt=334;
	}
	if(((y%4==0&&y%100!=0)||y%400==0)&&m>=3){
		cnt+=1;
	}
	else{
		cnt+=0;
	}
	return cnt;
}
int main(){
	int y,i,cnt,a;
	a=0;
	scanf("%d",&y);
	for(i=1;i<=31;i++){
		cnt=getcnt_y(y)+getcnt_m(y,5)+i;
		if(cnt%7==0){
			a++;
		}
		if(a==2&&cnt%7==0){
			printf("%d\n",i);
		}
	}
	return 0;
}

