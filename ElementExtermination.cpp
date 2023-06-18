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
		vector<int>a;
		int x;
		bool check=true;
		for(int i=0;i<n;i++){
			cin>>x;
			a.push_back(x);
		}
		if(a[0]==n||a[n-1]==1){
			check=false;
		}else if(a[0]>a[n-1]){
			check=false;
		}
		if(check){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}

