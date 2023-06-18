#include<stdio.h>

int main(){
	int a1,a2,a3,b1,b2,b3,n;
	
	scanf("%d %d %d",&a1,&a2,&a3);
	scanf("%d %d %d",&b1,&b2,&b3);
	scanf("%d",&n);
	int cups=a1+a2+a3;
	int medal=b1+b2+b3;
	while(cups>0){
		cups-=5;
		n-=1;
	}
	while(medal>0){
		medal-=10;
		n-=1;
	}
	if(n>=0){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
