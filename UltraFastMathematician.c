#include<stdio.h>

int main(){
	char s[101];
	char s2[101];
	int i;
	
	scanf("%s",&s);
	scanf("%s",&s2);
	int len=strlen(s);
	int x[len];
	for(i=0;i<len;i++){
		if(s[i]=='1'){
			if(s2[i]=='1'){
				s[i]='0';
			}
			if(s2[i]=='0'){
				s[i]='1';
			}
		}
		else if(s[i]=='0'){
			if(s2[i]=='1'){
				s[i]='1';
			}
			if(s2[i]=='0'){
				s[i]='0';
			}
		}
	}
	printf("%s\n",s);
	
	return 0;
}
