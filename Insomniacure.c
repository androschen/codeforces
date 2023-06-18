#include<stdio.h>

int main(){
	int k,l,m,n,d,i;
	
	scanf("%d",&k);
	scanf("%d",&l);
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&d);
	int count=0;
	for(i=1;i<=d;i++){
		if(i%k==0||i%l==0||i%m==0||i%n==0){
			count++;
		}
	}
	printf("%d\n",count);
	
	return 0;
}
