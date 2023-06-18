#include<stdio.h>

int main(){
	int pascal[10]={1,2,6,20,70,252,924,3432,12870,48620};
	int n;
	
	scanf("%d",&n);
	printf("%d\n",pascal[n-1]);
	
	return 0;
}
