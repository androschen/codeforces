#include<stdio.h>

int main(){
	int t,i,j,n;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n==1){
			printf("-1\n");
		}else{
			for(j=0;j<n;j++){
				if(j==0){
					printf("2");
				}else{
					printf("3");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
