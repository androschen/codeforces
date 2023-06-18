#include<stdio.h>
#include<math.h>

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int sum=0;
		for(j=1;j<10000;j++){
			int candy=pow(2,j-1);
			sum+=candy;
			if(n%sum==0&&sum>1){
				break;
			}
		}
		int x=n/sum;
		printf("%d\n",x,n,sum);
	}
	return 0;
}
