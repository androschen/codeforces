#include<stdio.h>

int main(){
	int n,i,j,k;
	
	scanf("%d",&n);
	int child;
	int team[4][5001];
	int count[4]={0};
	int jml=5001;
	for(i=0;i<n;i++){
		scanf("%d",&child);
		count[child-1]++;
		team[child-1][count[child-1]]=i+1;
	}
	for(i=0;i<3;i++){
		if(count[i]<jml){
			jml=count[i];
		}
	}
	printf("%d\n",jml);
	for(i=0;i<jml;i++){
		printf("%d %d %d\n",team[0][i+1],team[1][i+1],team[2][i+1]);
	}
	return 0;
}
