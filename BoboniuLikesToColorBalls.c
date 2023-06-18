#include<stdio.h>

int main(){
	int t,i,j;
	
	scanf("%d",&t);
	int col[5];
	for(i=0;i<t;i++){
		int check=1;
		int odd=0;
		int min=1000000000;
		for(j=0;j<4;j++){
			scanf("%d",&col[j]);
			if(col[j]%2!=0){
				odd++;	
			}
			if(col[j]<min&&j!=3){
				min=col[j];
			}
		}
		if(odd<=1){
			printf("YES\n");
		}else if(min!=0){
			odd=0;
			for(j=0;j<4;j++){
				col[j]--;
			}
			for(j=0;j<4;j++){
				if(col[j]%2!=0){
					odd++;
				}
			}
			if(odd<=1){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
