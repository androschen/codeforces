#include<stdio.h>
#include<string.h>

int main(){
	int t,i;
	
	scanf("%d",&t);
	while(t--){
		char s[51];
		scanf("%s",&s);
		for(i=0;i<strlen(s);i++){
			if(i%2==0){
				if(s[i]=='a'){
					s[i]='b';
				}else{
					s[i]='a';
				}
			}else{
				if(s[i]=='z'){
					s[i]='y';
				}else{
					s[i]='z';
				}
			}
		}
		printf("%s\n",s);
	}
	return 0;
}
