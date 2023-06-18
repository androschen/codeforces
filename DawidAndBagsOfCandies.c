#include<stdio.h>

int main(){
	int a,b,c,d;
	int i,j;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if(a+b==c+d||a+c==b+d||a+d==c+b){
		printf("YES\n");
	}else if(a+b+c==d||a+b+d==c||a+c+d==b||c+d+b==a){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
