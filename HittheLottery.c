#include<stdio.h>

int main(){
	int n,bill=0;
	
	scanf("%d",&n);
	while(n>=100){
		bill++;
		n-=100;
	}
	while(n>=20){
		bill++;
		n-=20;
	}
	while(n>=10){
		bill++;
		n-=10;
	}
	while(n>=5){
		bill++;
		n-=5;
	}
	while(n>=1){
		bill++;
		n--;
	}
	
	printf("%d\n",bill);
	
	return 0;
}
