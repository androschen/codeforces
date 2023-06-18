#include<stdio.h>
#include<string.h>

int main(){
	char n[101];
	int i,j,k;
	
	scanf("%s",&n);
	int count=0;
	int len=strlen(n);
	for(i=0;i<len-2;i++){
		if(n[i]=='Q'){
			for(j=i+1;j<len-1;j++){
				if(n[j]=='A'){
					for(k=j+1;k<len;k++){
						if(n[k]=='Q'){
							count++;
						}
					}
				}
			}
		}
	}
	printf("%d\n",count);
	
	return 0;
}
