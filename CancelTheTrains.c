#include<stdio.h>

int main(){
	int t,i,j,n,m,k;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		int bot[n];
		for(j=0;j<n;j++){
			scanf("%d",&bot[j]);
		}
		int left[m];
		for(j=0;j<m;j++){
			scanf("%d",&left[j]);
		}
		int count=0;
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
				if(bot[j]==left[k]){
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
