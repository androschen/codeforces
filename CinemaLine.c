#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int rub[n];
	int check=1;
	int tf=0,fifty=0;
	for(i=0;i<n;i++){
		scanf("%d",&rub[i]);
		if(rub[i]==25){
			tf++;
		}else if(rub[i]==50){
			if(tf==0){
				check=0;
			}else{
				tf--;
				fifty++;
			}
		}else if(rub[i]==100){
			if(tf>=1&&fifty>=1){
				fifty--;
				tf--;
			}else if(tf>=3&&fifty==0){
				tf-=3;
			}else{
				check=0;
			}
		}
	}
	if(check==1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
