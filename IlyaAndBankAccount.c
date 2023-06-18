#include<stdio.h>

int main(){
	int n;
	
	scanf("%d",&n);
	int last=n/10;
	int takelast=n%10;
	int lastsec=(n/100)*10+takelast;
	int max=n;
	if(last>max){
		max=last;
	}
	if(lastsec>max){
		max=lastsec;
	}
	printf("%d\n",max);
	
	return 0;
}
