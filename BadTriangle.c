#include<stdio.h>

int main(){
	int t,i,j,k,n,l;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int a[n];
		int max=0,idxmax;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			if(a[j]>max){
				max=a[j];
				idxmax=j;
			}
		}
		if(a[0]+a[1]<=max){
			printf("%d %d %d\n",1,2,idxmax+1);
		}else{
			printf("-1\n");
		}
	}
	return 0;
}
