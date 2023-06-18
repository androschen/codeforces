#include<stdio.h>

int main(){
	int n,t,i,j;
	char que[51];
	
	scanf("%d %d",&n,&t);
	scanf("%s",&que);
	
	for(i=0;i<t;i++){
		for(j=1;j<=n;j++){
			if(que[j]=='G'&&que[j-1]=='B'){
				char temp=que[j];
				que[j]=que[j-1];
				que[j-1]=temp;
				j++;
			}
		}
	}
	printf("%s\n",que);
	
	return 0;
}
