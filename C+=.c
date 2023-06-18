#include<stdio.h>

int main(){
	int t,a,b,n,i;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d %d",&a,&b,&n);
		int count=0;
		while(1){
			if(a>b){
				b+=a;
			}
			else{
				a+=b;
			}
			count++;
			if(a>n||b>n) break;
		}
		printf("%d\n",count);
	}
	return 0;
}
