#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int p,q;
	int count=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&p,&q);
		if(p+1<q) count++;
	}
	printf("%d\n",count);
	
	return 0;
}
