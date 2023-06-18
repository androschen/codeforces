#include<stdio.h>

int main(){
	int v1,v2,t1,t2,s;
	
	scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
	
	int first=(2*t1)+v1*s;
	int second=(2*t2)+v2*s;
	
	if(first==second){
		printf("Friendship\n");
	}else if(first<second){
		printf("First\n");
	}else{
		printf("Second\n");
	}
	return 0;
}
