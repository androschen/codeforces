#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int count=1;
	int max=0;
	if(n>1){
		for(i=0;i<n-1;i++){
			if(a[i]<=a[i+1]){
				count++;
			}else{
				count=1;
			}
			if(count>max){
				max=count;
			}
		}
	}
	else{
		max=1;
	}
	printf("%d\n",max);
	
	return 0;
}
