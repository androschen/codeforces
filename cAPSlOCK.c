#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char s[101];
	
	scanf("%s",&s);
	int len=strlen(s);
	
	int counter=0;
	int capital=0;
	if(len>1){
		for(i=1;i<len;i++){
			if(s[i]>='A'&&s[i]<='Z'){
				capital++;
			}
			if(s[i]>='a'&&s[i]<='z') counter++;
		}
		if(counter>0){
			printf("%s\n",s);
		}
		else if(counter==0&&capital>0){
			if(s[0]>='a'&&s[0]<='z'){
				strlwr(s);
				s[0]-=32;
				printf("%s\n",s);
			}
			else{
				strlwr(s);
				printf("%s\n",s);
			}
		}
	}
	else{
		if(s[0]>='a'&&s[0]<='z'){
			strupr(s);
			printf("%s",s);
		}
		else{
			strlwr(s);
			printf("%s\n",s);
		}
	}
	
	
	return 0;
}
