#include<stdio.h>

int main(){
	int x,min,count=0;;
	
	scanf("%d",&x);
	while(x>0){
		min=x%5;
		x-=5;
		count++;
	}
	printf("%d\n",count);
	return 0;
}
