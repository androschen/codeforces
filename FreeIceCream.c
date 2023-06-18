#include<stdio.h>

int main(){
	int n,i;
	long long int x,d;
	char bors;
	
	scanf("%d %lld",&n,&x);
	getchar();
	int distress=0;
	for(i=0;i<n;i++){
		scanf("%c %lld",&bors,&d);
		getchar();
		if(bors=='+'){
			x+=d;
		}else if(bors=='-'){
			if(d>x){
				distress++;
			}else{
				x-=d;
			}
		}
	}
	printf("%lld %d\n",x,distress);
	
	return 0;
}
