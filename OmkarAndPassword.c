#include<stdio.h>

int main(){
	int n,i,t,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int a[n];
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		int check=1;
		for(j=0;j<n-1;j++){
			if(a[j]!=a[j+1]){
				check=0;
				break;
			}
		}
		if(check==0){
			printf("1\n");
		}else{
			printf("%d\n",n);
		}
	}
	return 0;
}
