#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		int c0=0,c1=0,c2=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%3==0) c0++;
			else if(a[i]%3==1) c1++;
			else if(a[i]%3==2) c2++;
		}
		int cnt=0;
		while(true){
			if(c0==c1&&c0==c2) break;
			
			int maks=max(max(c0,c1),c2);
			if(maks==c0){
				c1++;
				c0--;
			}else if(maks==c1){
				c2++;
				c1--;
			}else if(maks==c2){
				c0++;
				c2--;
			}
			cnt++;
		}
	
		cout<<cnt<<endl;
	}

	return 0;
}

