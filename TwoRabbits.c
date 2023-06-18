#include<stdio.h>
#include<stdbool.h>

int main(){
	int x,y,a,b,t,i;
	
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		
		scanf("%d %d %d %d",&x,&y,&a,&b);
	
		int distance=y-x;
		int jump=a+b;
		
		if(distance%jump==0){
			printf("%d\n",distance/jump);
		}else{
			printf("-1\n");
		}
	}
	return 0;
}
