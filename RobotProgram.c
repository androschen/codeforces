#include<stdio.h>

int main(){
	int t,i,x,y;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&x,&y);
		int max=x;
		if(y>max){
			max=y;
		}
		if(x==y){
			printf("%d\n",x+y);
		}else{
			printf("%d\n",max*2-1);
		}
	}
	return 0;
}
