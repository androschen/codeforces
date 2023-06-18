#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	if(n%2==1){
		printf("-1\n");
	}else{
		for(i=n;i>0;i--){
			if(i==1){
				printf("%d\n",i);
			}else{
				printf("%d ",i);
			}
		}
	}
	return 0;
}
