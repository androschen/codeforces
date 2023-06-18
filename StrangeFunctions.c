#include<stdio.h>
#include<string.h>

int main(){
	int t,i;
	char n[101];
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",&n);
		int len=strlen(n);
		printf("%d\n",len);
	}
	return 0;
}
