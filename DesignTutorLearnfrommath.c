#include<stdio.h>

int main(){
	int n,x,y;
	
	scanf("%d",&n);
	if(n%2==0){
		x=4;
		y=n-x;
		printf("%d %d\n",x,y);
	}
	else{
		x=9;
		y=n-x;
		printf("%d %d\n",x,y);
	}
	
	return 0;
}
