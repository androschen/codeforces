#include<stdio.h>

int main(){
	int t,i;
	long long x,y;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%lld %lld",&x,&y);
		long long hasil=x-y;
		if(hasil==1){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
}
