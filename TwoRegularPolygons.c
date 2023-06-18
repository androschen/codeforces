#include<stdio.h>

int main(){
	int t,i,n,m;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		if(n%m==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
