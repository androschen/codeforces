#include<stdio.h>

int main(){
	int t,i,n;
	
	scanf("%d",&t);
	int candy;
	for(i=0;i<t;i++){
		scanf("%d",&n);
		if(n%2==0){
			candy=(n/2)-1;
		}
		else{
			candy=n/2;
		}
		printf("%d\n",candy);
	}
	return 0;
}
