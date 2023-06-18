#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int a[n],b[n];
	int alex=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]<b[i]) alex++;
	}
	if(alex>0){
		printf("Happy Alex\n");
	}else{
		printf("Poor Alex\n");
	}
	return 0;
}
