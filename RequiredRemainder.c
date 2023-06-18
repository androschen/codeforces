#include<stdio.h>

int main(){
	int t,i,x,y,n,k;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d %d",&x,&y,&n);
		k=n;
		int mod=k%x;
		if(mod-y>=0){
			k=n-(mod-y);
		}
		else{
			k=n-mod-x+y;
		}
		printf("%d\n",k);
	}
	return 0;
}
