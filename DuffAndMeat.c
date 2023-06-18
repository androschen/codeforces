#include<stdio.h>

int main(){
	int n,i,j;
	
	scanf("%d",&n);
	int a[n],p[n];
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&p[i]);
	}
	int price=a[0]*p[0];
	int check=0;
	int index=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(p[j]<p[i]){
				i=j-1;
				price+=a[j]*p[j];
				check=1;
				break;
			}else{
				price+=a[j]*p[i];
			}
			if(j==n-1){
				check=0;
			}
		}
		if(check==0){
			break;
		}
	}
	printf("%d\n",price);
	
	return 0;
}
