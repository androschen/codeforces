#include<stdio.h>

int main(){
	int t,h,m,i;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&h,&m);
		int ch=h*60+m;
		
		printf("%d\n",1440-ch);
	}
	return 0;
}
