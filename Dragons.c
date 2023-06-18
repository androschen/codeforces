#include<stdio.h>

struct dragon{
	int x;
	int y;
}temp;

int main(){
	int n,s,i,j;
	
	scanf("%d %d",&s,&n);
	struct dragon d[n];
	for(i=0;i<n;i++){
		scanf("%d %d",&d[i].x,&d[i].y);
	}
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(d[j].x>d[j+1].x){
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		if(d[i].x<s){
			s+=d[i].y;
		}
		else if(d[i].x>=s){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	
	return 0;
}
