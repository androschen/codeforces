#include<stdio.h>
#include<math.h>

int main(){
	int n,m,i,j;
	
	scanf("%d %d",&n,&m);
	int sum=n+m;
	int count=0;
	for(i=0;i<sum;i++){
		for(j=0;j<sum;j++){
			if(pow(i,2)+j==n&&i+pow(j,2)==m){
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}
