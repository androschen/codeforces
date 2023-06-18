#include<stdio.h>

int main(){
	int n,i,j;
	
	scanf("%d",&n);
	int h[n], m[n];
	int jam[25][61]={0};
	for(i=0;i<n;i++){
		scanf("%d %d",&h[i],&m[i]);
		jam[h[i]][m[i]]++;
	}
	int cashier=0;
	for(i=0;i<24;i++){
		int count=1;
		for(j=0;j<60;j++){
			if(jam[i][j]>1){
				count=jam[i][j];
			}
			if(count>cashier){
				cashier=count;
			}
		}
	}
	printf("%d\n",cashier);
	
	return 0;
}
