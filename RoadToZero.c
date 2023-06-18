#include<stdio.h>

int main(){
	int t,i,j;
	long long int x,y,a,b;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%lld %lld",&x,&y);
		scanf("%lld %lld",&a,&b);
		long long int dif;
		long long int dollar=0;
		if(x>y){
			dif=x-y;
			dollar+=dif*a;
			if(2*a<b){
				dollar+=(y*2*a);
			}else{
				dollar+=(y*b);
			}
		}else{
			dif=y-x;
			dollar+=dif*a;
			if(2*a<b){
				dollar+=x*2*a;
			}else{
				dollar+=(x*b);
			}
		}
		printf("%lld\n",dollar);
	}
	return 0;
}
