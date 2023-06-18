#include<stdio.h>

int main(){
	long long int t,i,a,b,c;
	
	scanf("%lld",&t);
	for(i=0;i<t;i++){
		scanf("%lld %lld %lld",&a,&b,&c);
		printf("%lld\n",a+b+c-1);
	}
	return 0;
}
