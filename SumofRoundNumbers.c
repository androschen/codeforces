#include<stdio.h>

int main(){
	int n,t,i;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int p=1;
		int tem=n;
		int count=0;
		while(tem>0){
			int temp=tem;
			temp%=10;
			if(temp!=0){
				temp*=p;
				count++;
			}
			p*=10;
			tem/=10;
		}
		printf("%d\n",count);
		p=1;
		while(n>0){
			int temp=n;
			temp%=10;
			if(temp!=0&&n<=10){
				printf("%d\n",temp*p);
			}
			if(temp!=0&&n>10){
				printf("%d ",temp*p);
			}
			p*=10;
			n/=10;
		}
	}
}
