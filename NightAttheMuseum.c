#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char s[101];
	
	scanf("%s",&s);
	
	int len=strlen(s);
	
	int rot1,rot2,min;
	int count=0;
	
	rot1='a'-s[0];
	rot2=s[0]-'a';
	if(rot1<0){
		rot1+=26;
	}
	else if(rot2<0){
		rot2+=26;
	}
	if(rot1>rot2){
		min=rot2;
	}else{
		min=rot1;
	}
	count+=min;

	for(i=0;i<len-1;i++){
		rot1=s[i+1]-s[i];
		rot2=s[i]-s[i+1];
		if(rot1<0){
			rot1+=26;
		}
		if(rot2<0){
			rot2+=26;
		}
		if(rot1>rot2){
			min=rot2;
		}else{
			min=rot1;
		}
		
		count+=min;
	}
	printf("%d\n",count);
	return 0;
}
