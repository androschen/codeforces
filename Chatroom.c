#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char s[101],h[6]="hello";
	
	scanf("%s",&s);
	int len=strlen(s);
	int l=0;
	for(i=0;i<len;i++){
		if(s[i]==h[l]){
			l++;
		}
		if(l==5){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	
	return 0;
}
