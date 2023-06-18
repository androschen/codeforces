#include<stdio.h>

int main(){
	long long int n,i;
	
	scanf("%lld",&n);
	long long int x;
	if(n%2==0){
		x=n/2;
	}
	else if(n%2==1){
		x=((n-1)/2)-n;
	}

	printf("%lld\n",x);
	
	return 0;
}
