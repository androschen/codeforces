#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n,i,j,m;
	
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	sort(b,b+m);
	
	printf("%d %d\n",a[n-1],b[m-1]);

	return 0;
}
