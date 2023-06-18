#include<stdio.h>

int main(){
	int t,i,a,b;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		if(2*a<=b){
			printf("%d\n",a);
		}else if(2*b<=a){
			printf("%d\n",b);
		}else{
			printf("%d\n",(a+b)/3);	
		}
	}
	return 0;
}
