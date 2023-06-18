#include<stdio.h>

int main(){
	int t,n,i,j;
	int arr[31]={0};
	int diff[31]={0};
	int multi=1;
	
	for(i=0;i<30;i++){
		multi*=2;
		arr[i]+=multi;
	}
	for(i=0;i<30;i++){
		for(j=0;j<i;j++){
			diff[i]+=arr[j];
		}
	}
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int min=diff[n/2];
		printf("%d\n",min);
	}
	return 0;
}
