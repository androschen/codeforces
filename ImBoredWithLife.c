#include<stdio.h>

int main(){
	int a,b,i;
	
	scanf("%d %d",&a,&b);
	int min=a;
	if(b<a){
		min=b;
	}
	int divisor=1;
	for(i=1;i<=min;i++){
		divisor*=i;
	}
	printf("%d\n",divisor);
	return 0;
}
