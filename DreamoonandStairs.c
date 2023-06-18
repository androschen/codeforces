#include<stdio.h>

int main(){
	int n,m,i;
	
	scanf("%d %d",&n,&m);
	int min;
	if(n/m>=1){
		if(n%2==0){
			if((n/2)%2==0){
				min=n/2;
			}else if((n/2)%m==0){
				min=n/2;
			}else{
				min=n/2+1;
			}
		}else{
			min=n/2+1;
		}
		while(min%m!=0){
			min++;
		}
		printf("%d\n",min);
	}else{
		printf("-1\n");
	}
	return 0;
}
