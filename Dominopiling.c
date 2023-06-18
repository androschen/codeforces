#include<stdio.h>

int main(){
	int m,n;
	int domino=2*1;
	
	scanf("%d %d",&m,&n);
	int count=0;
	while(m*n>=domino){
		count++;
		domino+=2;
	}
	printf("%d\n",count);
	return 0;
}
