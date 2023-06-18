#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int count=0;
	for(i=1;i<=n/2;i++){
		if((n-i)%i==0){
			count++;
		}
	}
	printf("%d\n",count);
	
	return 0;
}
