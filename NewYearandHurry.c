#include<stdio.h>

int main(){
	int n,k,i=1;
	
	scanf("%d %d",&n,&k);
	int problem;
	
	int solve=0;
	while(1){
		k+=5*i;
		if(k>240) break;
		solve++;
		if(solve==n) break;
		i++;
	}
	printf("%d\n",solve);
	
	return 0;
}
