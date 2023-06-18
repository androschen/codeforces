#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int gift[n];
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		gift[arr[i]-1]=i+1;
	}
	for(i=0;i<n;i++){
		if(i==n-1) printf("%d\n",gift[i]);
		else printf("%d ",gift[i]);
	}
	return 0;
}
