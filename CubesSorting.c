#include<stdio.h>

int main(){
	int t,n,i,j,k;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int a[n];
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		
		int count=0;
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				count++;
			}
		}

		if(count<n-1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
