#include<stdio.h>

int main(){
	int t,n,m,i,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		int a[n];
		int sum=0;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			sum+=a[j];
		}
		if(sum==m){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
