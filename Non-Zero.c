#include<stdio.h>

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int a[n];
		int count=0;
		int sum=0;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			if(a[j]==0){
				count++;
				a[j]++;
			}
			sum+=a[j];
		}
		if(sum==0){
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
