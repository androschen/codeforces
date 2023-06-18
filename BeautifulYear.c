#include<stdio.h>

int main(){
	int y;
	
	scanf("%d",&y);
	int a,b,c,d;
	int x=y+1;
	while(1){
		y=x;
		a=y%10;
		y/=10;
		b=y%10;
		y/=10;
		c=y%10;
		y/=10;	
		d=y%10;
		if (a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
			printf("%d\n",x);
			break;
		}
		else{
			x++;
		}
	}
	
	return 0;
}
