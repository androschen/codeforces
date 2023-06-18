#include<stdio.h>

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int a[n];
		int min=101;
		int number[101]={0};
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			number[a[j]]++;
		}
		int count=0;
		int index;
		int max=0;
		for(j=0;j<101;j++){
			if(number[j]>max){
				max=number[j];
				index=j;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}
