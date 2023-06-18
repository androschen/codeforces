#include<stdio.h>

int main(){
	int k2,k3,k5,k6;
	
	scanf("%d %d %d %d",&k2,&k3,&k5,&k6);
	
	int sum=0;
	while(k2>0&&k5>0&&k6>0){
		sum+=256;
		k2--;
		k5--;
		k6--;
	}
	while(k2>0&&k3>0){
		sum+=32;
		k2--;
		k3--;
	}
	printf("%d\n",sum);
	
	return 0;
}
