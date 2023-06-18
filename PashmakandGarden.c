#include<stdio.h>

int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	int side;
	int check=1;
	if(x1==x2){
		if(y2>y1){
			side=y2-y1;	
		}else{
			side=y1-y2;
		}
		x3=x1+side;
		x4=x2+side;
		y3=y1;
		y4=y2;
	}else if(y1==y2){
		if(x2>x1){
			side=x2-x1;	
		}else{
			side=x1-x2;
		}
		x3=x1;
		x4=x2;
		y3=y1+side;
		y4=y2+side;
	}else if(abs(x2-x1)==abs(y2-y1)){
		x3=x1;
		y3=y2;
		x4=x2;
		y4=y1;
	}else{
		check=0;
	}
	
	if(check==0){
		printf("-1\n");
	}else{
		printf("%d %d %d %d\n",x3,y3,x4,y4);	
	}
	
	return 0;
}
