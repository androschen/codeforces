#include<stdio.h>

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int stick=ceil((double)n/2);
		
		printf("%d\n",stick);
	}
	return 0;
}
