#include<stdio.h>
#include<string.h>

int main(){
	char s[51];
	char t[51];
	int i,j;
	
	scanf("%s",&s);
	scanf("%s",&t);
	int count=0;
	int ins=0;
	for(i=0;i<strlen(t);i++){
		for(j=ins;j<strlen(s);j++){
			if(t[i]==s[j]){
				ins++;
				count++;
				break;
			}else{
				break;
			}
		}
	}
	printf("%d\n",count+1);
	
	return 0;
}
