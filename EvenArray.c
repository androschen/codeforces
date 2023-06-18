#include<stdio.h>

int main(){
	int t,n,i,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int a[n];
		int give[n];
		int req[n];
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			give[j]=j%2;
			req[j]=a[j]%2;
		}
		int count=0;
		int ctr=0;
		for(j=0;j<n;j++){
			if(give[j]!=req[j]){
				if(give[j]==1){
					count++;
				}
				else{
					ctr++;
				}
			}
		}
		if(count!=ctr){
			printf("-1\n");
		}
		else{
			printf("%d\n",count);
		}
	}
	return 0;
}
