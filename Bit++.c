#include<stdio.h>

int main(){
	int n,i,x=0;
	char bit[4];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&bit);
		if(bit[0]=='X'&&bit[1]=='+'&&bit[2]=='+'){
			x++;
		}
		if(bit[0]=='+'&&bit[1]=='+'&&bit[2]=='X'){
			x++;
		}
		if(bit[0]=='X'&&bit[1]=='-'&&bit[2]=='-'){
			x--;
		}
		if(bit[0]=='-'&&bit[1]=='-'&&bit[2]=='X'){
			x--;
		}			
	}
	printf("%d\n",x);
	return 0;
}
