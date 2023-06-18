#include<stdio.h>

int main(){
	int t,n,i,x;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&x);
		int count=1;
		n-=2;
		while(n>0){
			n-=x;
			count++;
		}
		printf("%d\n",count);
	}
	
	return 0;
}
