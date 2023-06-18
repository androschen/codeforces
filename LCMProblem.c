#include<stdio.h>

int main(){
	int l,r,t,i;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&l,&r);
		if(l*2<=r){
			printf("%d %d\n",l,2*l);
		}else{
			printf("-1 -1\n");
		}
	}
	return 0;
}
