#include<stdio.h>
int main(){
	int y,m,d,dis;
	scanf("%d%d%d%d",&y,&m,&d,&dis);
	while(1){
		if(dis==0){
			break;
		}
		else{
			if(m==12&&d==31){
				m=1;
				d=1;
				y++;
				dis--;
			}
			else{
				if(((m==1||m==3||m==5||m==7||m==8||m==10)&&d==31)||((m==4||m==6||m==9||m==11)&&d==30)){
					d=1;
					m++;
					dis--;
				}
				else if((m==2&&d==28&&((y%100==0&&y%400!=0)||y%4!=0))||(m==2&&d==29&&((y%4==0&&y%100!=0)||y%400==0))){
					d=1;
					m++;
					dis--;
				}
				else{
					d++;
					dis--;
				}
			}
		}
	}
	printf("%d.%d.%d\n",y,m,d);
	return 0;
}

