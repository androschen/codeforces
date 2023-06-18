#include<stdio.h>

int main(){
	int n,i,j;
	
	scanf("%d",&n);
	int a[n];
	int max=0,min=101,mini,maxi;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
			maxi=i;
		}
		if(a[i]<=min){
			min=a[i];
			mini=i;
		}
	}
	if(maxi>mini){
		mini++;
	}
	printf("%d\n",maxi+(n-1)-mini);
	
	return 0;
}
