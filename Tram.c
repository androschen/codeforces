#include<stdio.h>

int main(){
	int n,i,minimum;
	
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	int max=0;
	int index=1;
	int sum[n];
	for(i=0;i<n-1;i++){
		sum[index]=b[i]-a[i+1]+b[i+1];
		b[i+1]=sum[index];
		index++;
	}
	sum[0]=b[0];
	for(i=0;i<index;i++){
		if(sum[i]>max){
			max=sum[i];
		}
	}
	printf("%d\n",max);
	return 0;
}
