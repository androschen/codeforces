#include<stdio.h>

int main(){
	int t,i,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		char b[101]={0};
		char a[101]={0};
		scanf("%s",&b);
		int len=strlen(b);
		int idx=0;
		for(j=0;j<len-1;j++){
			if(b[j]==b[j+1]){
				a[idx]=b[j];
				idx++;
				j++;
			}
			else{
				a[idx]=b[j];
				idx++;
			}
		}
		a[idx]=b[len-1];
		idx++;
		printf("%s\n",a);
	}
	return 0;
}
