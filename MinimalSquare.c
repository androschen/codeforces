#include<stdio.h>

int main(){
	int a,b,t,i,min,max,maks;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		if(a>b){
			min=b*2;
			max=a;
		}
		else if(b>=a){
			min=a*2;
			max=b;
		}
		if(min>max){
			maks=min;
		}
		if(max>=min){
			maks=max;
		}
		
		printf("%d\n",maks*maks);
	}
	return 0;
}
