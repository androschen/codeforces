#include<stdio.h>

int main(){
	int i,j,tempi,tempj;
	int m[i][j];
	int count=0;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			scanf("%d",&m[i][j]);
			if(m[i][j]==1){
				tempi=i;
				tempj=j;
			}
		}
	}	
		while(tempi<3){
			tempi++;
			count++;
		}
		while(tempi>3){
			tempi--;
			count++;
		}
		while(tempj<3){
			tempj++;
			count++;
		}
		while(tempj>3){
			tempj--;
			count++;
		}
		if(tempi==3&&tempj==3){
		printf("%d\n",count);	
		}
	
	return 0;
}
