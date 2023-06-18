#include<stdio.h>

int main(){
	int r,c,i,j;
	
	scanf("%d %d",&r,&c);
	for(i=1;i<=r;i++){
		if(i%2!=0){
			for(j=1;j<=c;j++){
				printf("#");
			}
		}
		else{
			for(j=1;j<=c;j++){
				if((i/2)%2!=0&&j==c){
					printf("#");
				}
				else if((i/2)%2==0&&j==1){
					printf("#");
				}
				else{
					printf(".");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
