#include<stdio.h>

int main(){
	int t,n,i,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int arr[n+1];
		for(j=0;j<n;j++){
			arr[j]=n-j;
		}
		int temp=arr[n/2];
		arr[n/2]=arr[n-1];
		arr[n-1]=temp;
		
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
