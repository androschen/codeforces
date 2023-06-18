#include<stdio.h>

int main(){
	char kata[100];
	int t,i;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",&kata);
		getchar();
		int len=strlen(kata);
		if(len>10){
			printf("%c%d%c\n",kata[0],len-2,kata[len-1]);
		}
		if(len<=10){
			printf("%s\n",kata);
		}
	}
	return 0;
}
