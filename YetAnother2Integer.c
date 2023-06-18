#include<stdio.h>

int main(){
	int t,i,a,b;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		if(a<b){
			int temp=a;
			a=b;
			b=temp;
		}
		if((a-b)%10!=0){
			printf("%d\n",(a-b)/10+1);
		}
		else{
			printf("%d\n",(a-b)/10);
		}
	}
	return 0;
}
