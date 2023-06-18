#include<stdio.h>

int main(){
	int n,i,p,q,j;
	
	scanf("%d",&n);
	scanf("%d",&p);	
	int a[n+n];
	for(i=0;i<p;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&q);
	for(i=i;i<p+q;i++){
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=1;i<=n;i++){
		for(j=0;j<p+q;j++){
			if(a[j]==i){
				count++;
				break;
			}
		}
	}
	if(count==n){
		printf("I become the guy.\n");
	}
	else{
		printf("Oh, my keyboard!\n");
	}
	return 0;
}
