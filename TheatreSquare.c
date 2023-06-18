#include<stdio.h>
#include<math.h>

int main(){
	long long int n,m,a;
	
	scanf("%lld %lld %lld",&n,&m,&a);
	long long int count=0;
	long long int stonen,stonem;
	stonen=ceil((double)n/a);
	stonem=ceil((double)m/a);
	
	printf("%lld\n",stonen*stonem);
	
	return 0;
}
