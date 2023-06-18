#include<stdio.h>
#include<stdbool.h>

int main(){
	int t,i,n,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		
		int p[n+1],c[n+1];
		bool check=true;
		for(j=0;j<n;j++){
			scanf("%d %d",&p[j],&c[j]);
		}
		for(j=0;j<n;j++){
			if(c[j]>p[j]){
				check=false;
				break;
			}
		}
		for(j=0;j<n-1;j++){
			if(c[j]>c[j+1]||p[j]>p[j+1]){
				check=false;
			}
			if(p[j]==p[j+1]&&c[j]!=c[j+1]){
				check=false;
			}
			if(p[j+1]-p[j]<c[j+1]-c[j]){
				check=false;
			}
		}
		
		if(check){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
