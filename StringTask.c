#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char s[101];
	
	scanf("%s",&s);
	int len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]=='A'||s[i]=='a'||s[i]=='O'||s[i]=='o'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='Y'||s[i]=='y'||s[i]=='U'||s[i]=='u'){
			continue;
		}
		else{
			if(s[i]>='A'&&s[i]<='Z'){
				s[i]=s[i]+32;
			}
			printf(".%c",s[i]);
		}
	}
	printf("\n");
	
	return 0;
}
