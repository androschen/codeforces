#include<stdio.h>

int main(){
	int r,c,i,j;
	
	scanf("%d %d",&r,&c);
	getchar();
	char rec[r+1][c+1];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%c",&rec[i][j]);
		}
		getchar();
	}
	int countc=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(rec[i][j]=='S') break;
			if(j==c-1){
				countc++;
			}		
		}	
	}
	int countr=0;
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			if(rec[j][i]=='S') break;
			if(j==r-1){
				countr++;
			}
		}
	}
	printf("%d\n",countc*c+countr*r-(countc*countr));
	
	return 0;
}
