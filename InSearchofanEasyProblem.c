#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int prob[n];
	for(i=0;i<n;i++){
		scanf("%d",&prob[i]);
	}
	for(i=0;i<n;i++){
		if(prob[i]==1){
			printf("HARD\n");
			break;
		}
		if(i==n-1){
			printf("EASY\n");
		}
	}
	return 0;
}
