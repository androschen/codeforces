#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		set<int>s;
		s.insert(n);
		s.insert(0);
		for(int i=1;i<=sqrt(n);i++){
			s.insert(i);
			s.insert(n/i);
		}
		cout<<s.size()<<endl;
		for(auto x: s){
			cout<<x<<" ";
		}
		cout<<endl;
	}

	return 0;
}

