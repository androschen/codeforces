#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char s[101];
	
	scanf("%s",&s);
	int len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
			printf("YES\n");
			break;
		}
		if(i==len-1){
			printf("NO\n");
		}
	}
	return 0;
}
