#include<stdio.h>

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int a[n],b[n];
		int mina=1000000001;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			if(a[j]<mina){
				mina=a[j];
			}
		}
		int minb=1000000001;
		for(j=0;j<n;j++){
			scanf("%d",&b[j]);
			if(b[j]<minb){
				minb=b[j];
			}
		}
		long long int sum=0;
		for(j=0;j<n;j++){
			long long int movea=a[j]-mina;
			long long int moveb=b[j]-minb;
			if(movea>=moveb){
				sum+=movea;
			}
			else if(moveb>movea){
				sum+=moveb;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}
