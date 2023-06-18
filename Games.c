#include<stdio.h>

int main(){
	int n,i,j;
	
	scanf("%d",&n);
	int h[n],a[n];
	for(i=0;i<n;i++){
		scanf("%d %d",&h[i],&a[i]);
	}
	int count=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(h[i]==a[j]){
				count++;
			}
		}
	}
	printf("%d\n",count);
	
	return 0;
}
