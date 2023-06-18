#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int occur[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&occur[i]);
	}
	int count=0;
	int hire=0;
	for(i=0;i<n;i++){
		if(hire+occur[i]<0){
			count++;
		}
		else{
			hire+=occur[i];
		}
	}
	printf("%d\n",count);
	return 0;
}
