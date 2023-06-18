#include<stdio.h>

int main(){
	int t,i,n,m,j,k,kk;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		int a[n+1][m+1];
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
				scanf("%d",&a[j][k]);
			}
		}
		int claimed[51]={0};
		int row[51]={0};
		int col[51]={0};
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
				if(a[j][k]==1){
					row[j]=1;
					col[k]=1;
				}
			}
		}
		int count=0;
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
				if(row[j]==0&&col[k]==0){
					count++;
					row[j]=1;
					col[k]=1;
				}
			}
		}
		if(count%2==0){
			printf("Vivek\n");
		}else{
			printf("Ashish\n");
		}
	}
	return 0;
}
