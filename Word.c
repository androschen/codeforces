#include<stdio.h>
#include<string.h>

int main(){
	char s[101];
	int i,k=0,b=0;
	
	scanf("%s",&s);
	int len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]>='A'&&s[i]<='Z'){
			b++;
		}
		if(s[i]>='a'&&s[i]<='z'){
			k++;
		}
	}
	if(k>=b){
		for(i=0;i<len;i++){
			if(s[i]>='A'&&s[i]<='Z'){
				s[i]+=32;
			}
		}
	}
	if(b>k){
		for(i=0;i<len;i++){
			if(s[i]>='a'&&s[i]<='z'){
				s[i]-=32;
			}
		}
	}
	printf("%s\n",s);
	return 0;
}
