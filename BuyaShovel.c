#include<stdio.h>

int main(){
	int k,r,i=1;
	
	scanf("%d %d",&k,&r);
	int count=0;
	while(1){
		int temp=k;
		count++;
		temp*=i;
		if(temp%10==r||temp%10==0) break;
		i++;
	}
	printf("%d\n",count);
	
	return 0;
}
