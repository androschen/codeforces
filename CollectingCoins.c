#include<stdio.h>

int main(){
	int t,a,b,i,c,n;
	
	scanf("%d",&t);
	int coin;
	for(i=0;i<t;i++){
		scanf("%d %d %d %d",&a,&b,&c,&n);
		int max=a;
		if(b>=a&&b>=c){
			max=b;
		}
		else if(c>=a&&c>=b){
			max=c;
		}
		coin=a+b+c+n;
		if(coin%3==0&&coin/3>=max){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
