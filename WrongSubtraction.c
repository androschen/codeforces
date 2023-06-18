#include<stdio.h>

int main(){
	int n,k,i,dt;
	
	scanf("%d %d",&n,&k);
	for(i=0;i<k;i++){
	dt=n%10;
		if(dt==0){
			n/=10;
		}
		else{
			n=n-1;
		}
	}
	printf("%d\n",n);
	return 0;
}
