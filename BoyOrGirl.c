#include<stdio.h>
#include<string.h>

int main(){
	char karakter[101];
	int i,index;
	
	scanf("%s",&karakter);
	int len=strlen(karakter);
	int s[26]={0};
	for(i=0;i<len;i++){
		index=karakter[i]-97;
		s[index]=1;
	}
	int sum=0;
	for(i=0;i<26;i++){
		sum+=s[i];
	}
	if(sum%2==0){
		printf("CHAT WITH HER!\n");
	}
	else{
		printf("IGNORE HIM!\n");
	}
	return 0;
}
