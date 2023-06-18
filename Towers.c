#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int l[n];
	int tower[1001]={0};
	for(i=0;i<n;i++){
		scanf("%d",&l[i]);
		tower[l[i]]++;
	}
	int count=0;
	int max=0;
	for(i=0;i<1001;i++){
		if(tower[i]>0) count++;
		if(tower[i]>max){
			max=tower[i];
		}
	}
	printf("%d %d\n",max,count);
	
	return 0;
}
