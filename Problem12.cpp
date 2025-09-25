#include<stdio.h>
int main(){
	char c,_c;
	scanf("%c",&c);
	if(c>='a'&&c<='z'){
		_c=c-32;
	}
	else if(c>='A'&&c<='Z'){
		_c=c+32;
	}
	else{
		_c=c;
	}
	printf("%c\n",_c);
	return 0;
}

