#include<stdio.h>

int main(){
	int n,j,i;
	
	scanf("%d",&n);
	int a[n];

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int count=0;
	for(i=0;i<n-1;i++){
		if(a[i+1]-a[i]>1){
			count+=a[i+1]-a[i]-1;
		}
	}
	printf("%d\n",count);
	
	
	return 0;
}
