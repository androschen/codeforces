#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,i,n,j,d;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&d);
		int a[n+1];
		bool check=true;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			if(a[j]>d){
				check=false;
			}
		}
		sort(a,a+n);
		
		if(n>2){
			if(a[0]+a[1]<=d){
				check=true;
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
