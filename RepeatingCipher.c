#include<stdio.h>

int main(){
	int n,i;
	char s[56],temp[56];
	
	scanf("%d",&n);
	scanf("%s",&s);
	int left=0;
	int jump=1;
	int index=0;
	for(i=left;i<n;i+=jump){
		temp[index]=s[i];
		index++;
		jump++;
	}
	for(i=0;i<index;i++){
		printf("%c",temp[i]);
	}

	return 0;
}
