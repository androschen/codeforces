#include<stdio.h>
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int main(){
	int n,i,j;
	
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	long long int mini;
	for(i=0;i<n;i++){
		long long int maxi=MAX(abs(x[i]-x[0]),abs(x[i]-x[n-1]));
		if(i==0){
			mini=abs(x[i]-x[i+1]);
		}else if(i==n-1){
			mini=abs(x[i]-x[i-1]);
		}else{
			mini=MIN(abs(x[i]-x[i+1]),abs(x[i]-x[i-1]));
		}
		printf("%lld %lld\n",mini,maxi);
	}
	return 0;
}
