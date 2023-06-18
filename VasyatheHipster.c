#include<stdio.h>

int main(){
	int a,b;
	
	scanf("%d %d",&a,&b);
	int dif,same,x;

	if(a>b){
		dif=a-b;
		x=b;
	}
	else if(a<=b){
		dif=b-a;
		x=a;
	}
	same=dif/2;
	if(same<1){
		same=0;
	}
	printf("%d %d\n",x,same);
	
	return 0;
}
