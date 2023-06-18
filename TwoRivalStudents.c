#include<stdio.h>

int main(){
	int t,i,n,x,a,b;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d %d %d",&n,&x,&a,&b);
		int distance=abs(a-b)+x;
		if(distance>=n){
			distance=n-1;
		}
		printf("%d\n",distance);
	}
	return 0;
}
