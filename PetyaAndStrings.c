#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char kata1[101];
	char kata2[101];
		
	scanf("%s",&kata1);
	getchar();
	scanf("%s",&kata2);
	getchar();
	
	int len=strlen(kata1);
	for(i=0;i<len;i++){
		if(kata1[i]>='A'&&kata1[i]<='Z'){
			kata1[i]=kata1[i]+32;
		}
		if(kata2[i]>='A'&&kata2[i]<='Z'){
			kata2[i]=kata2[i]+32;
		}
	}
	for(i=0;i<len;i++){	
		if(kata1[i]>kata2[i]){
			printf("1\n");
			break;
		}
		if(kata1[i]<kata2[i]){
			printf("-1\n");
			break;
		}
		if(i<len-1){
			if(kata1[i]==kata2[i]){
				continue;
			}		
		}
		if(kata1[len-1]==kata2[len-1]){
			printf("0\n");		
		}
	}
	return 0;
}
