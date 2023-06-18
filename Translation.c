#include<stdio.h>

int main(){
	char be[101];
	char bi[101];
	char be2[101];
	int i,index=0;
	int count=0;
	
	scanf("%s",&be);
	scanf("%s",&bi);
	int len=strlen(be);
	for(i=len-1;i>=0;i--){
		be2[index]=be[i];
		index++;
	}
	for(i=0;i<len;i++){
		if(be2[i]==bi[i]){
			count++;
		}
	}
	if(count==len){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
