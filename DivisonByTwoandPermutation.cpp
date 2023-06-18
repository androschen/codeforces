#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	
	cin>>n;
	int a[n];
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		while(a[i]>n){
			a[i]/=2;
		}
		while(s.find(a[i])!=s.end()&&a[i]>0){
			a[i]/=2;
		}
		if(a[i]>0){
			s.insert(a[i]);
		}else{
			cout<<"NO\n";
			return;
		}
//		cout<<a[i]<<" ";
	}
	if(s.size()==n){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

