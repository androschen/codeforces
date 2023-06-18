#include<stdio.h>
#include<math.h>

int main(){
	int n,m,min;
	
	scanf("%d %d",&n,&m);
	if(n>m){
		min=m;
	}
	else{
		min=n;
	}
	int s=pow(min,2);
	if(s%2==0){
		printf("Malvika\n");
	}
	else{
		printf("Akshat\n");
	}
	return 0;
}
