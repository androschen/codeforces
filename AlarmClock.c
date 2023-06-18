#include<stdio.h>

int main(){
	int a,b,c,d,t,i;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
			
		scanf("%d %d %d %d",&a,&b,&c,&d);
		
		if(a<=b){
			printf("%d\n",b);
		}else if(d>=c){
			printf("-1\n");
		}else{
			long long int minute=b;
			long long int one=c-d;
			long long more=((a-b+one-1)/one)*c;
			
			minute+=more;
			
			printf("%lld\n",minute);
		}
	}
	return 0;
}
