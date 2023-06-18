#include<stdio.h>

int main(){
	int n,a,b,c,i,j,k;
	
	scanf("%d %d %d %d",&n,&a,&b,&c);
	
	int count=0;
//	if(a%2!=0){
//		a=a-1;
//	}
	
	for(i=0;i<=a;i+=2){
		for(j=0;j<=b;j++){
			for(k=0;k<=c;k++){
				if(i/2+j+k*2==n){
					count++;
					break;
				}
			}
		}
	}
	printf("%d\n",count);
	
	return 0;
}
