#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	char s[n];
	
	scanf("%s",&s);
	int x=0,y=0;
	for(i=0;i<n;i++){
		if(s[i]=='L'){
			x++;
		}else{
			y++;
		}
	}
	printf("%d\n",x+y+1);
	
	return 0;
}
