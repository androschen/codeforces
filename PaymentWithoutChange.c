#include<stdio.h>

int main(){
	int q,i,b,s;
	long long int a,n;
	
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%lld %d %lld %d",&a,&b,&n,&s);
		unsigned long long int coin=a*n+b;
		if(coin>=s){
			if(s%n<=b){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
