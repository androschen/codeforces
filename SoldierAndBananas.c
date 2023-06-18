#include<stdio.h>

int main(){
	long long int k,n,w,price,pinjem,i;
	
	scanf("%lld %lld %lld",&k,&n,&w);
	long long int sum=0;
	for(i=1;i<=w;i++){
		price=i*k;
		sum+=price;
	}
	if(sum>n){
		pinjem=sum-n;
		printf("%lld\n",pinjem);
	}
	if(n>=sum){
		printf("0\n");
	}
	return 0;
}
