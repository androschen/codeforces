#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int a[n];
	int count=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]==1) count++;
	}
	printf("%d\n",count);
	for(i=1;i<n;i++){
		if(a[i]==1){
			printf("%d ",a[i-1]);
		}
	}
	printf("%d\n",a[n-1]);
	
	return 0;
}
