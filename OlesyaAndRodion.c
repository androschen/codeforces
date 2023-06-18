#include<stdio.h>
#include<math.h>

int main(){
	int n,t,i;
	
	scanf("%d %d",&n,&t);
	if(n==1&&t>9){
		printf("-1\n");
	}
	else{
		for(i=0;i<n;i++){
			if(t>9){
				int temp=t;
				if(i==n-2){
					printf("%d",t);
					i++;
				}
				else{
					temp/=10;
					printf("%d",temp);
				}
			}
			else{
				printf("%d",t);
			}
		}
		printf("\n");
	}
	
	return 0;
}
