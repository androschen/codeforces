#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int a[n];
	int pocket[101]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		pocket[a[i]]++;
	}
	int max=0;
	for(i=0;i<101;i++){
		if(pocket[i]>max){
			max=pocket[i];
		}
	}
	printf("%d\n",max);
	
	return 0;
}
