#include<stdio.h>

int main(){
	int x[4],i;
	
	int max=0;
	int min=101;
	for(i=0;i<3;i++){
		scanf("%d",&x[i]);
		if(x[i]>max){
			max=x[i];
		}
		if(x[i]<min){
			min=x[i];
		}
	}
	printf("%d\n",max-min);
	
	return 0;
}
