#include<stdio.h>

int main(){
	int n,i,j;
	
	scanf("%d",&n);
	
	char seat[n][6];
	int check=0;
	for(i=0;i<n;i++){
		scanf("%s",&seat[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<5;j++){
			if(seat[i][j]=='O'&&seat[i][j+1]=='O'){
				check=1;
				seat[i][j]='+';
				seat[i][j+1]='+';
				break;
			}
		}
		if(check==1) break;
	}
	if(check==1){
		printf("YES\n");
		for(i=0;i<n;i++){
			printf("%s\n",seat[i]);
		}
	}else{
		printf("NO\n");
	}
	return 0;
}
