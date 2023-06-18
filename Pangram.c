#include<stdio.h>

int main(){
	int n,i;
	char s[101];
	
	scanf("%d",&n);
	scanf("%s",&s);
	int index;
	int temp[27]={0};
	for(i=0;i<n;i++){
		if(s[i]>='A'&&s[i]<='Z'){
			index=s[i]-65;
			temp[index]=1;
		}
		if(s[i]>='a'&&s[i]<='z'){
			index=s[i]-97;
			temp[index]=1;
		}
	}
	for(i=0;i<26;i++){
		if(temp[i]==0){
			printf("NO\n");
			break;
		}
		if(i==25){
			printf("YES\n");
		}
	}
	return 0;
}
