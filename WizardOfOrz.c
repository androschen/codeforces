#include<stdio.h>

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			printf("%d",(8+abs(j-1))%10);
		}
		printf("\n");
	}
	return 0;
}
