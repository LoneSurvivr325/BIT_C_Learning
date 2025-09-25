#include<stdio.h>
#include<string.h>
//H>S>D>C
int main(){
	char a[3][3]={0},b[3][3]={0},temp;
	bool flag=true,isLegal=true;
	int cnt1=0,cnt2=0,i,j,A[3]={0},B[3]={0},t;
	while(flag==true){
		temp=getchar();
		if(temp!=' '&&temp!='\n'){
			a[cnt1][cnt2]=temp;
			cnt2++;
		}
		else if(temp==' '){
			cnt1++;
			cnt2=0;
		}
		else{
			flag=false;
		}
	}
	flag=true;
	cnt1=0;
	cnt2=0;
	while(flag==true){
		temp=getchar();
		if(temp!=' '&&temp!='\n'){
			b[cnt1][cnt2]=temp;
			cnt2++;
		}
		else if(temp==' '){
			cnt1++;
			cnt2=0;
		}
		else{
			flag=false;
		}
	}
	for(i=0;i<3;i++){
		if(a[i][0]=='H'){
			A[i]+=400;
		}
		else if(a[i][0]=='S'){
			A[i]+=300;
		}
		else if(a[i][0]=='D'){
			A[i]+=200;
		}
		else if(a[i][0]=='C'){
			A[i]+=100;
		}
		if(a[i][1]=='A'&&a[i][2]==0){
			A[i]+=14;
		}
		else if(a[i][1]=='2'&&a[i][2]==0){
			A[i]+=2;
		}
		else if(a[i][1]=='3'&&a[i][2]==0){
			A[i]+=3;
		}
		else if(a[i][1]=='4'&&a[i][2]==0){
			A[i]+=4;
		}
		else if(a[i][1]=='5'&&a[i][2]==0){
			A[i]+=5;
		}
		else if(a[i][1]=='6'&&a[i][2]==0){
			A[i]+=6;
		}
		else if(a[i][1]=='7'&&a[i][2]==0){
			A[i]+=7;
		}
		else if(a[i][1]=='8'&&a[i][2]==0){
			A[i]+=8;
		}
		else if(a[i][1]=='9'&&a[i][2]==0){
			A[i]+=9;
		}
		else if(a[i][1]=='1'){
			if(a[i][2]=='0'){
				A[i]+=10;
			}
		}
		else if(a[i][1]=='J'&&a[i][2]==0){
			A[i]+=11;
		}
		else if(a[i][1]=='Q'&&a[i][2]==0){
			A[i]+=12;
		}
		else if(a[i][1]=='K'&&a[i][2]==0){
			A[i]+=13;
		}
		if(b[i][0]=='H'){
			B[i]+=400;
		}
		else if(b[i][0]=='S'){
			B[i]+=300;
		}
		else if(b[i][0]=='D'){
			B[i]+=200;
		}
		else if(b[i][0]=='C'){
			B[i]+=100;
		}
		if(b[i][1]=='A'&&b[i][2]==0){
			B[i]+=14;
		}
		else if(b[i][1]=='2'&&b[i][2]==0){
			B[i]+=2;
		}
		else if(b[i][1]=='3'&&b[i][2]==0){
			B[i]+=3;
		}
		else if(b[i][1]=='4'&&b[i][2]==0){
			B[i]+=4;
		}
		else if(b[i][1]=='5'&&b[i][2]==0){
			B[i]+=5;
		}
		else if(b[i][1]=='6'&&b[i][2]==0){
			B[i]+=6;
		}
		else if(b[i][1]=='7'&&b[i][2]==0){
			B[i]+=7;
		}
		else if(b[i][1]=='8'&&b[i][2]==0){
			B[i]+=8;
		}
		else if(b[i][1]=='9'&&b[i][2]==0){
			B[i]+=9;
		}
		else if(b[i][1]=='1'){
			if(b[i][2]=='0'){
				B[i]+=10;
			}
		}
		else if(b[i][1]=='J'&&b[i][2]==0){
			B[i]+=11;
		}
		else if(b[i][1]=='Q'&&b[i][2]==0){
			B[i]+=12;
		}
		else if(b[i][1]=='K'&&b[i][2]==0){
			B[i]+=13;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<2-i;j++){
			if(A[j]<A[j+1]){
				t=A[j];
				A[j]=A[j+1];
				A[j+1]=t;
			}
			if(B[j]<B[j+1]){
				t=B[j];
				B[j]=B[j+1];
				B[j+1]=t;
			}
		}
	}
	for(i=0;i<3;i++){
		if(A[i]/100==4){
			a[i][0]='H';
		}
		else if(A[i]/100==3){
			a[i][0]='S';
		}
		else if(A[i]/100==2){
			a[i][0]='D';
		}
		else if(A[i]/100==1){
			a[i][0]='C';
		}
		else{
			a[i][0]='#';
		}
		if(A[i]%100==14){
			a[i][1]='A';
			a[i][2]=0;
		}
		else if(A[i]%100==2){
			a[i][1]='2';
			a[i][2]=0;
		}
		else if(A[i]%100==3){
			a[i][1]='3';
			a[i][2]=0;
		}
		else if(A[i]%100==4){
			a[i][1]='4';
			a[i][2]=0;
		}
		else if(A[i]%100==5){
			a[i][1]='5';
			a[i][2]=0;
		}
		else if(A[i]%100==6){
			a[i][1]='6';
			a[i][2]=0;
		}
		else if(A[i]%100==7){
			a[i][1]='7';
			a[i][2]=0;
		}
		else if(A[i]%100==8){
			a[i][1]='8';
			a[i][2]=0;
		}
		else if(A[i]%100==9){
			a[i][1]='9';
			a[i][2]=0;
		}
		else if(A[i]%100==10){
			a[i][1]='1';
			a[i][2]='0';
		}
		else if(A[i]%100==11){
			a[i][1]='J';
			a[i][2]=0;
		}
		else if(A[i]%100==12){
			a[i][1]='Q';
			a[i][2]=0;
		}
		else if(A[i]%100==13){
			a[i][1]='K';
			a[i][2]=0;
		}
		else{
			a[i][1]='#';
			a[i][2]='#';
		}
		if(B[i]/100==4){
			b[i][0]='H';
		}
		else if(B[i]/100==3){
			b[i][0]='S';
		}
		else if(B[i]/100==2){
			b[i][0]='D';
		}
		else if(B[i]/100==1){
			b[i][0]='C';
		}
		else{
			b[i][0]='#';
		}
		if(B[i]%100==14){
			b[i][1]='A';
			b[i][2]=0;
		}
		else if(B[i]%100==2){
			b[i][1]='2';
			b[i][2]=0;
		}
		else if(B[i]%100==3){
			b[i][1]='3';
			b[i][2]=0;
		}
		else if(B[i]%100==4){
			b[i][1]='4';
			b[i][2]=0;
		}
		else if(B[i]%100==5){
			b[i][1]='5';
			b[i][2]=0;
		}
		else if(B[i]%100==6){
			b[i][1]='6';
			b[i][2]=0;
		}
		else if(B[i]%100==7){
			b[i][1]='7';
			b[i][2]=0;
		}
		else if(B[i]%100==8){
			b[i][1]='8';
			b[i][2]=0;
		}
		else if(B[i]%100==9){
			b[i][1]='9';
			b[i][2]=0;
		}
		else if(B[i]%100==10){
			b[i][1]='1';
			b[i][2]='0';
		}
		else if(B[i]%100==11){
			b[i][1]='J';
			b[i][2]=0;
		}
		else if(B[i]%100==12){
			b[i][1]='Q';
			b[i][2]=0;
		}
		else if(B[i]%100==13){
			b[i][1]='K';
			b[i][2]=0;
		}
		else{
			b[i][1]='#';
			b[i][2]='#';
		}
	}
	for(i=0;i<3;i++){
		if(A[i]<100||A[i]%100==0||B[i]<100||B[i]%100==0){
			isLegal=false;
		}
	}
	if(A[0]==A[1]||A[0]==A[2]||A[1]==A[2]){
		isLegal=false;
	}
	if(B[0]==B[1]||B[0]==B[2]||B[1]==B[2]){
		isLegal=false;
	}
	if(isLegal==false){
		printf("Input Error!\n");
	}
	else{
		if(A[0]!=B[0]){
			if(A[0]>B[0]){
				printf("Winner is A!\n");
			}
			else{
				printf("Winner is B!\n");
			}
		}
		else{
			if(A[1]!=B[1]){
				if(A[1]>B[1]){
					printf("Winner is A!\n");
				}
				else{
					printf("Winner is B!\n");
				}
			}
			else{
				if(A[2]!=B[2]){
					if(A[2]>B[2]){
						printf("Winner is A!\n");
					}
					else{
						printf("Winner is B!\n");
					}
				}
				else{
					printf("Winner is X!\n");
				}
			}
		}
		printf("A:");
		for(i=0;i<3;i++){
			printf(" ");
			for(j=0;j<3;j++){
				if(a[i][j]!=0){
					printf("%c",a[i][j]);
				}
			}
		}
		printf("\nB:");
		for(i=0;i<3;i++){
			printf(" ");
			for(j=0;j<3;j++){
				if(b[i][j]!=0){
					printf("%c",b[i][j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}

