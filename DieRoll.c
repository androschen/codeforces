#include<stdio.h>

int main(){
	int y,w;
	
	scanf("%d %d",&y,&w);
	int max=y;
	if(w>max){
		max=w;
	}
	int dot=6-max+1;
	int b=6;
	if(b%dot==0){
		b/=dot;
		dot=1;
	}
	else if(dot==4){
		b=3;
		dot=2;
	}
	printf("%d/%d\n",dot,b);
	
	return 0;
}
