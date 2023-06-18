#include<stdio.h>

int main(){
	int s[5],i,j;
	
	int temp[5]={0};
	for(i=0;i<4;i++){
		scanf("%d",&s[i]);
	}
	
	int count=0;
	int index=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(s[i]==temp[j]){
				break;
			}
			if(j==3){
				temp[index]=s[i];
				index++;
				count++;
			}
		}
	}
	printf("%d\n",4-count);
	
	return 0;
}
