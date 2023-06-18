#include<stdio.h>

int main(){
	int t,n,x,i,j,k;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&x);
		int a[n];
		int odd=0,even=0;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			if(a[j]%2!=0){
				odd++;
			}else{
				even++;
			}
		}
		int check=0;
		if(odd==0){
			check=1;
			printf("No\n");
		}
		else{
			for(j=1;j<=odd;j+=2){
				if(j>x) break;
				if((x-j)<=even){
					printf("Yes\n");
					check=1;
					break;
				}
			}	
		}
		if(check==0){
			printf("No\n");
		}
	}
	return 0;
}
