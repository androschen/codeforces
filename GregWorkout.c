#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int a[n];
	int bic=0,chest=0,back=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if((i+1)%3==0){
			back+=a[i];
		}else if((i+1)%3==1){
			chest+=a[i];
		}else{
			bic+=a[i];
		}
	}
	if(bic>back&&bic>chest){
		printf("biceps\n");
	}else if(back>bic&&back>chest){
		printf("back\n");
	}else{
		printf("chest\n");
	}
	
	return 0;
}
