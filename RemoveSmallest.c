#include<stdio.h>

void sort(int arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int arr[n];
		for(j=0;j<n;j++){
			scanf("%d",&arr[j]);
		}
		if(n==1){
			printf("YES\n");
		}
		
		if(n>1){
			sort(arr,n);
			for(j=0;j<n-1;j++){
				if(arr[j+1]-arr[j]>1){
					printf("NO\n");
					break;
				}
				if(j==n-2){
					printf("YES\n");
				}
			}
		}
	}
	return 0;
}
