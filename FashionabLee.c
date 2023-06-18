#include<stdio.h>

int main(){
	int t,n,i;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n%4==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
