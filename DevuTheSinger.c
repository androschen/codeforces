#include<stdio.h>

int main(){
	int n,i,d;
	
	scanf("%d %d",&n,&d);
	int check=1;
	int t[n];
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&t[i]);
		sum+=t[i];
	}
	int maxjoke;
	if(n==1){
		if(d>=5+t[0]){
			maxjoke=1;
		}else if(d<t[0]){
			check=0;
		}else{
			maxjoke=0;
		}
	}else if(n*10>d){
		check=0;
	}else{
		sum+=(n-1)*10;
		if(sum>d){
			check=0;
		}else{
			maxjoke=((d-sum)+(n-1)*10)/5;
		}
	}
	if(check==1){
		printf("%d\n",maxjoke);
	}else{
		printf("-1\n");
	}
	return 0;
}
