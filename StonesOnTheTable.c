#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j;
	
	scanf("%d",&n);
	char warna[n+1];
	int count=0;
	for(i=0;i<n+1;i++){
		scanf("%c",&warna[i]);
		if(warna[i]==warna[i-1]){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
