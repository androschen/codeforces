#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int m[n],c[n];
	int mish=0;
	int chris=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&m[i],&c[i]);
		if(m[i]>c[i]) mish++;
		if(c[i]>m[i]) chris++;
	}
	if(mish>chris) printf("Mishka\n");
	else if(chris>mish) printf("Chris\n");
	else printf("Friendship is magic!^^\n");
	
	return 0;
}
