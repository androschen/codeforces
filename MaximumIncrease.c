#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int a[n];
	int max=1;
	int count=1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		if(a[i]<a[i+1]){
			count++;
			if(count>max){
				max=count;
			}
		}else{
			count=1;
		}
	}
	printf("%d\n",max);
	
	return 0;
}
