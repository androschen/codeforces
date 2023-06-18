#include<stdio.h>

int main(){
	int n,m,a,b;
	
	scanf("%d %d %d %d",&n,&m,&a,&b);
	int special=0;
	if(n>=m){
		special=(n/m)*b;
	}
	int normalpacket=n*a;
	int sisa=(n%m)*a;
	int sisaspec=b;
	int min=sisa;
	if(sisaspec<sisa){
		min=sisaspec;
	}
	int cheap=special+min;
	if(n*a<special+min){
		cheap=n*a;
	}
	
	printf("%d\n",cheap);
	
	return 0;
}
