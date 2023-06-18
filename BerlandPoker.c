#include<stdio.h>

int main(){
	int t,i,n,m,k;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d %d",&n,&m,&k);
		int pc=n/k;
		if(pc>=m){
			printf("%d\n",m);
		}else{
			int point=ceil((double)(m-pc)/(k-1));
			printf("%d\n",pc-point);
		}
	}
	return 0;
}
