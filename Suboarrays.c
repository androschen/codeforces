#include<stdio.h>

int main(){
	int j,n,i,t;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		for(j=1;j<=n;j++){
			if(j==n){
				printf("%d\n",j);
			}else{
			printf("%d ",j);
			}
		}
	}
	return 0;
}
