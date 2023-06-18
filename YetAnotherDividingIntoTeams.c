#include<stdio.h>

int main(){
	int q,i,n,j,k;
	
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%d",&n);
		int a[n];
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		int count=0;
		if(n==1){
			count=0;
		}else{
			for(j=0;j<n;j++){
				for(k=0;k<n;k++){
					if(j!=k){
						if(abs(a[j]-a[k])==1){
							count++;
						}
					}
				}
			}
		}
		if(count>0){
			printf("2\n");
		}else{
			printf("1\n");
		}
	}
	return 0;
}
