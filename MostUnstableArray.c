#include<stdio.h>

int main(){
	int t,i,m,n,j;
	
	scanf("%d",&t);
	int max;
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		if(n>2){
			max=2*m;
		}
		else if(n==2){
			max=m;
		}
		else{
			max=0;
		}
		printf("%d\n",max);
	}
	return 0;
}
