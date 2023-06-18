#include<stdio.h>

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int arr[n];
		int suml=0;
		if((n/2)%2==0){
			printf("YES\n");
			for(j=0;j<n/2;j++){
				arr[j]=2*(j+1);
				suml+=arr[j];
			}
			int idx=0;
			int sumr=0;
			for(j=n/2;j<n-1;j++){
				arr[j]=arr[idx]-1;
				idx++;
				sumr+=arr[j];
			}
			arr[n-1]=suml-sumr;
			for(j=0;j<n;j++){
				if(j==n-1){
					printf("%d\n",arr[j]);
				}
				else{
					printf("%d ",arr[j]);
				}
			}
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
