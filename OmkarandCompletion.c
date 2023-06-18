#include<stdio.h>

int main(){
	int t,i,j,n;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int arr[n];
		int sum=1;
		for(j=0;j<n;j++){
			arr[j]=sum;
		}
		for(j=0;j<n;j++){
			if(j==n-1){
				printf("%d\n",arr[j]);
			}
			else{
				printf("%d ",arr[j]);
			}
		}
	}
	return 0;
}
