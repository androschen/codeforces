#include<stdio.h>

int main(){
	int t,i;
	long long a,b,c;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%lld %lld %lld",&a,&b,&c);
		int shop1,shop2;
		if(a>=c){
			shop1=-1;
			shop2=b;
		}else if(a<c){
			shop1=1;
			if(a*b>c){
				shop2=b;
			}else{
				shop2=-1;
			}
		}
		printf("%d %d\n",shop1,shop2);
	}
	return 0;
}
