#include<stdio.h>

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int a[n];
		int max=0;
		int min=101;
		int num[101]={0};
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			if(a[j]>max){
				max=a[j];
			}
			num[a[j]]++;
		}
		int mexa=-1;
		int mexb=-1;
		for(j=0;j<=max+1;j++){
			if(num[j]==0){
				mexa=j;
				break;
			}else{
				num[j]--;
			}
		}
		for(j=0;j<=max+1;j++){
			if(num[j]==0){
				mexb=j;
				break;
			}else{
				num[j]--;
			}
		}
		printf("%d\n",mexa+mexb);
	}
	return 0;
}
