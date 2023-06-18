#include<stdio.h>

int main(){
	int n,m,i;
	
	scanf("%d %d",&n,&m);
	int sock=n;
	for(i=1;i<=sock;i++){
		if(i%m==0){
			sock++;
		}
	}
	printf("%d\n",sock);
	
	return 0;
}
