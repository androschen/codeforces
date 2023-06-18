#include<stdio.h>
#include<string.h>

int main(){
	char lucky[18];
	int i,count=0;
	
	scanf("%s",&lucky);
	int len=strlen(lucky);
	for(i=0;i<len;i++){
		if(lucky[i]=='4'||lucky[i]=='7'){
			count++;
		}
	}
	if(count==4||count==7){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
