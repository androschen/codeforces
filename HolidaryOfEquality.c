#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int a[n];
	int max=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
	}
	int sum=0;
	for(i=0;i<n;i++){
		sum+=max-a[i];
	}
	printf("%d\n",sum);
	
	return 0;
}
