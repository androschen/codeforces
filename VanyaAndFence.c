#include<stdio.h>

int main(){
	int n,h,i;
	
	scanf("%d %d",&n,&h);
	int width;
	int count=0;
	for(i=0;i<n;i++){
		scanf("%d",&width);
		if(width>h) count+=2;
		if(width<=h) count++;
	}
	printf("%d\n",count);
	
	return 0;
}
