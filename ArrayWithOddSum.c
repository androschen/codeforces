#include<stdio.h>

int main(){
	int t,n,i,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int arr;
		int even=0;
		int odd=0;
		int sum=0;
		for(j=0;j<n;j++){
			scanf("%d",&arr);
			if(arr%2!=0){
				odd++;
			}
			else{
				even++;
			}
			sum+=arr;
		}
		if(sum%2!=0){
			printf("YES\n");
		}
		else if(even>0&&odd>0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
