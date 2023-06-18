#include<stdio.h>

int main(){
	int t,i,n;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int step=0;
		if(n==1){
			step=0;
		}else if(n==2){
			step=1;
		}else if(n%2==0){
			step=2;
		}else if(n%2==1&&n>3){
			step=3;
		}else{
			step=2;
		}
		printf("%d\n",step);
	}
	return 0;
}
