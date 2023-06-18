#include<stdio.h>

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n%2==0){
			for(j=0;j<n/2;j++){
				printf("1");
			}
			printf("\n");
		}else{
			for(j=0;j<n/2;j++){
				if(j==0){
					printf("7");
				}else{
					printf("1");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
