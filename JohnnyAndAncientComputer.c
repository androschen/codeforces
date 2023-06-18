#include<stdio.h>

int main(){
	int t,i;
	long long int a,b;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%lld %lld",&a,&b);

		if(a==b){
			printf("0\n");
		}else{
			if(a<b){
				long long int temp=a;
				a=b;
				b=temp;
			}
			long long int step=0;
			while(a>b){
				if(a/8>=b&&a%8==0){
					step++;
					a/=8;
				}
				else if(a/4>=b&&a%4==0){
					step++;
					a/=4;
				}
				else if(a/2 >=b&&a%2==0){
					step++;
					a/=2;
				}else{
					break;
				}
			}
			if(a==b){
				printf("%lld\n",step);
			}else{
				printf("-1\n");
			}
		}	
	}
	return 0;
}
