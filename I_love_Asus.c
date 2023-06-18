#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	int amaze=0;
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			amaze++;
		}
		if(a[i]<min){
			min=a[i];
			amaze++;
		}
	}
	printf("%d\n",amaze);
	
	return 0;
}
