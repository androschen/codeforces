#include<stdio.h>

int main(){
	int n,k,i;
	
	scanf("%d %d",&n,&k);
	int p[n];
	int count=0;
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
		if(i<k&&p[i]>0){
			count++;
		}	
		if(p[k-1]==p[k]&&p[i]>0&&i>k-1){
			count++;
			k++;
		}
	}
	printf("%d\n",count);
	return 0;
}
