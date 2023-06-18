#include<stdio.h>

int main(){
	int n,i,j;
	int A=0,B=0;
	
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	for(i=0;i<n;i++){
		if(s[i]=='A') A++;
		if(s[i]=='D') B++;	
	}
	if(A>B) printf("Anton\n");
	if(B>A) printf("Danik\n");
	if(A==B) printf("Friendship\n");
	
	return 0;
}
