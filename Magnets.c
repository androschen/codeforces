#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int magnet[n];
	for(i=0;i<n;i++){
		scanf("%d",&magnet[i]);
	}
	int count=1;
	for(i=0;i<n-1;i++){
		if(magnet[i]!=magnet[i+1]){
			count++;
		}
	}
	printf("%d\n",count);
	
	return 0;
}
