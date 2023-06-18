#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	char s[n],temp[n];
	scanf("%s",&s);
	
	int count1=0;
	int count0=0;

	for(i=0;i<n;i++){
		if(s[i]=='1'){
			count1++;
		}
		else{
			count0++;
		}
	}
	
	if(count1>count0){
		printf("%d\n",count1-count0);
	}else{
		printf("%d\n",count0-count1);
	}

	
	return 0;
}
