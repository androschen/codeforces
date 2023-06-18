#include<stdio.h>

int main(){
	int a1,a2;
	
	scanf("%d %d",&a1,&a2);

	int count=0;
	int change=1;
	while(1){
		if(a1==1&&a2==1) break;
		if(a1==0||a2==0) break;
		
		if(a1>a2){
			a2++;
			a1-=2;
		}else{
			a1++;
			a2-=2;
		}
		count++;
	}
	printf("%d\n",count);
	
	return 0;
}
