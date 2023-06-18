#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char s[101];
	
	scanf("%s",&s);
	int len=strlen(s);
	int count0=0;
	int count1=0;
	for(i=0;i<len;i++){
		if(s[i]=='0'){
			count0++;
			count1=0;
		}
		else if(s[i]=='1'){
			count1++;
			count0=0;
		}
		if(count0>=7||count1>=7){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	
	return 0;
}
