#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	
	int x[n],y[n],z[n];	
	int eqx=0,eqy=0,eqz=0;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
		eqx+=x[i];
		eqy+=y[i];
		eqz+=z[i];
	}
	if(eqx==0&&eqz==0&&eqy==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
