#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	char ori[n],open[n];
	
	scanf("%s",&ori);
	scanf("%s",&open);
	int count=0;
	for(i=0;i<n;i++){
		if(ori[i]>open[i]&&ori[i]-open[i]<=5){
			count+=ori[i]-open[i];
		}else if(ori[i]>open[i]&&ori[i]-open[i]>5){
			count+=open[i]+10-ori[i];
		}else if(open[i]>ori[i]&&open[i]-ori[i]<=5){
			count+=open[i]-ori[i];
		}else if(open[i]>ori[i]&&open[i]-ori[i]>5){
			count+=ori[i]+10-open[i];
		}
	}
	printf("%d\n",count);
	
	return 0;
}
