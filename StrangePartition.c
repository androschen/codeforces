#include<stdio.h>

int main(){
	int t,i,n,x,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&x);
		long long int a[n];
		long long int suml=0;
		long long int sum=0;
		for(j=0;j<n;j++){
			scanf("%lld",&a[j]);
			suml+=ceil((double)a[j]/x);
			sum+=a[j];
		}
		long long int be=sum/x;
		if(sum%x!=0){
			be++;
		}
	
		printf("%lld %lld\n",be,suml);
	}
	return 0;
}
