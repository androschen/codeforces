#include<stdio.h>

int main(){
	int n,m,i,j;
	
	scanf("%d %d",&n,&m);
	char color[n][m];
	
	int checkcolor=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%s",&color[i][j]);
			if(color[i][j]=='C'||color[i][j]=='M'||color[i][j]=='Y'){
				checkcolor=1;
			}
		}
	}
	
	if(checkcolor==0){
		printf("#Black&White\n");
	}else{
		printf("#Color\n");
	}
	return 0;
}
