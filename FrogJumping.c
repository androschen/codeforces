#include<stdio.h>

int main(){
	int t,i;
	long long int a,b,k;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%lld %lld %lld",&a,&b,&k);
		long long int divideb=k/2;
		long long int dividea=k-divideb;
		long long int jumpA=a*dividea;
		long long int jumpB=b*divideb;
		long long int sum=jumpA-jumpB;
		printf("%lld\n",sum);
	}
	return 0;
}
