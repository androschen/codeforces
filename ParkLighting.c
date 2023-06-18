#include<stdio.h>

int main(){
	int t,i,n,m;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		if(n%2==0){
			n/=2;
			printf("%d\n",n*m);
		}
		else{
			if(m%2==0){
				n/=2;
				printf("%d\n",n*m+(m/2));
			}
			else{
				n/=2;
				printf("%d\n",n*m+(m/2)+1);
			}
		}
	}
	return 0;
}
