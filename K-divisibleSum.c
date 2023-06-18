#include<stdio.h>

int main(){
	int t,i,n,k;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&k);
		int minp;
		int left;
		if(k>n){
			minp=k/n;
			left=k%n;
			if(left>0){
				minp++;
			}
			printf("%d\n",minp);
		}else{
			left=n%k;
			if(left==0){
				minp=1;
			}
			else if(k==1){
				minp=1;
			}else{
				minp=2;
			}
			printf("%d\n",minp);
		}
	}
	return 0;
}
