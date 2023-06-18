#include<stdio.h>

int main(){
	int n,m,t,i;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		if(n==1||m==1){
			printf("YES\n");
		}else if(n==2&&m==2){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
