#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int t,n,k;
	
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll a[n];
		bool check=true;
		int c[64]={};
		for(int i=0;i<n;i++){
			cin>>a[i];
			int idx=0;
			while(a[i]){
				c[idx]+=a[i]%k;
				idx++;
				a[i]/=k;
			}
		}
		for(int i=0;i<60;i++){
//			cout<<c[i]<<endl;
			if(c[i]>1){
				check=false;
				break;
			}
		}
		
		string ch=(check)? "YES": "NO";
		cout<<ch<<endl;
	}

	return 0;
}

