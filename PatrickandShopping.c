#include<stdio.h>

int main(){
	int d1,d2,d3;
	
	scanf("%d %d %d",&d1,&d2,&d3);
	int min=d3+d1+d2;
	
	if((d1+d2)*2<min){
		min=(d1+d2)*2;
	}else if((d2+d3)*2<min){
		min=(d2+d3)*2;
	}else if((d1+d3)*2<min){
		min=(d1+d3)*2;
	}
	printf("%d\n",min);
	return 0;
}
