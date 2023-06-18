#include<stdio.h>
#include<math.h>

int main(){
	int q,n,i,j;
	
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%d",&n);
		int a[n];
		int sum=0;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			sum+=a[j];
		}
		int price=ceil((double)sum/n);
		
		printf("%d\n",price);
	}
	return 0;
}
