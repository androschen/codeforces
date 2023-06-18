#include<stdio.h>
#include<math.h>

int main(){
	int t,i;
	long long int n,k;
	
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&n,&k);
		long long int sum=n;
		if(sum%2==0){
			sum+=k*2;
		}else{
			if(sum%3==0){
				sum+=3;
			}else if(sum%5==0){
				sum+=5;
			}else{
				int check=0;
				for(i=7;i<=n;i+=2){
					if(n%i==0){
						sum+=i;
						check=1;
						break;
					}
				}
				if(check==0){
					sum+=n;
				}
			}
			sum+=(k-1)*2;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
