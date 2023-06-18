#include<stdio.h>

int main(){
	int n,k,i;
	
	scanf("%d %d",&n,&k);
	int f[n],t[n];
	int happy=0;
	int max=-999999999;
	for(i=0;i<n;i++){
		scanf("%d %d",&f[i],&t[i]);
		if(k>=t[i]){
			happy=f[i];
		}else{
			happy=f[i]-(t[i]-k);
		}
		if(happy>max){
			max=happy;
		}
	}
	printf("%d\n",max);
	
	return 0;
}
