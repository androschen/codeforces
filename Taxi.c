#include<stdio.h>
#include<math.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int s[n];
	int sum=0;
	int count=0;
	int group1=0,group2=0,group3=0;
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
		sum+=s[i];
		if(s[i]==4) count++;
		if(s[i]==1) group1++;
		if(s[i]==2) group2++;
		if(s[i]==3) group3++;
	}
	while(group3!=0&&group1!=0){
		group1--;
		group3--;
		count++;
	}
	if(group3!=0&&group1==0){
		count+=group3;
		group3=0;
	}
	count+=group2/2;
	if(group2%2!=0){
		if(group1<=2){
			count++;
			group2=0;
			group1=0;
		}
		else{
			group1-=2;
			count++;
			group2=0;
		}
	}
	if(group1!=0){
		count+=group1/4;
		if(group1%4!=0){
			count++;
		}
	}
	
	printf("%d\n",count);
	
	return 0;
}
