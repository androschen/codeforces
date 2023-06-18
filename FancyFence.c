#include<stdio.h>

int main(){
	int t,i,a;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&a);
		int x=180-a;
		if(360%x==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
