#include<stdio.h>

int main(){
	int n,k,l,c,d,p,nl,np;
	
	scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
	int drink=(k*l)/nl;
	int lime=c*d;
	int salt=p/np;
	int min=drink;
	
	if(lime<=drink&&lime<=salt){
		min=lime;
	}
	else if(salt<=drink&&salt<=lime){
		min=salt;
	}
	printf("%d\n",min/n);
	
	return 0;
}
