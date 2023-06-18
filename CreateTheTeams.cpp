#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int t,n,x;
	
	cin>>t;
	while(t--){
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		ll cnt=1,ans=0;
		for(int i=0;i<n;i++){		
			if(a[i]*cnt>=x){
				ans++;
				cnt=0;
			}
			cnt++;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}

