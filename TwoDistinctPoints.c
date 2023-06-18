#include<stdio.h>

int main(){
	int q,i,l1,r1,l2,r2;
	
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
		if(l1==l2){
			printf("%d %d\n",l1,r2);
		}else{
			printf("%d %d\n",l1,l2);
		}
	}
	return 0;
}
