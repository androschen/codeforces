#include<stdio.h>

int main(){
	int t,i,j,a,b,c,d,x,y,x1,y1,x2,y2;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		scanf("%d %d %d %d %d %d",&x,&y,&x1,&y1,&x2,&y2);
		
		int check=1;
		
		if(b-a>x2-x||a-b>x-x1){
			check=0;
		}
		if(d-c>y2-y||c-d>y-y1){
			check=0;
		}
		if(x1==x2&&a+b>0){
			check=0;
		}
		if(y1==y2&&d+c>0){
			check=0;
		}
		if(check==1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
