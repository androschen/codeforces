#include<stdio.h>

int main(){
	int n,m;
	
	scanf("%d %d",&n,&m);
	if(m%n!=0){
		printf("-1\n");
	}else{
		int count=0;
		int div=m/n;
		while(div>0){
			if(div==1){
				break;
			}
			if(div%3==0){
				div/=3;
				count++;
			}
			else if(div%2==0){
				div/=2;
				count++;
			}else{
				printf("-1\n");
				return 0;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
