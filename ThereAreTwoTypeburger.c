#include<stdio.h>

int main(){
	int t,i,b,p,f,h,c;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d %d",&b,&p,&f);
		scanf("%d %d",&h,&c);
		int bun=b/2;
		int pricey=h;
		int ex=p;
		int ch=f;
		int cheaper=c;
		if(c>h){
			pricey=c;
			cheaper=h;
			ex=f;
			ch=p;
		}
		int profit=0;
		while(1){
			if(bun==0||ex==0) break;
			profit+=pricey;
			bun--;
			ex--;
		}
		while(1){
			if(bun==0||ch==0) break;
			profit+=cheaper;
			bun--;
			ch--;
		}
		printf("%d\n",profit);
	}
	return 0;
}
