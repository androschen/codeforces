#include<stdio.h>

int main(){
	char kata[1001];
	
	scanf("%s",&kata);
	getchar();
	if(kata[0]>='a'&&kata[0]<='z'){
		kata[0]=kata[0]-32;	
	}
	printf("%s\n",kata);
	return 0;
}
