#include<stdio.h>
#include<string.h>
int main(){
	int i=0,j=0,cnt1=0,cnt2=0,len1,len2;
	char s1[100]={0},s2[100]={0};
	bool flag=true;
	while(flag==true){
		s1[i]=getchar();
		if(s1[i]=='\n'){
			flag=false;
			s1[i]=0;
		}
		else{
			i++;
		}
	}
	flag=true;
	i=0;
	while(flag==true){
		s2[i]=getchar();
		if(s2[i]=='\n'){
			flag=false;
			s2[i]=0;
		}
		else{
			i++;
		}
	}
	len1=strlen(s1);
	len2=strlen(s2);
	for(i=0;i<len2;i++){
		for(j=cnt1;j<len1;j++){
			if(s1[j]<=s2[i]){
				printf("%c",s1[j]);
				cnt1++;
			}
			else{
				printf("%c",s2[i]);
				cnt2++;
				break;
			}
		}
		if(cnt1==len1){
			break;
		}
	}
	if(cnt1==len1){
		for(i=cnt2;i<len2;i++){
			printf("%c",s2[i]);
		}
	}
	if(cnt2==len2){
		for(i=cnt1;i<len1;i++){
			printf("%c",s1[i]);
		}
	}
	printf("\n");
	return 0;
}

