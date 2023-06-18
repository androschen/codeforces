#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int k;
	
	cin>>k;
	int n;
	set<pair<int,pair<int,int>>> ans;
	for(int i=0;i<k;i++){
		cin>>n;
		int a[n];
		int sum=0;
		for(int j=0;j<n;j++){
			cin>>a[j];
			sum+=a[j];
		}
		for(int j=0;j<n;j++){
			ans.insert({sum-a[j],{i+1,j+1}});
		}
	}
	pair<int,pair<int,int>> prev = *ans.begin();
	for(auto el : ans){
		if(prev.first==el.first&&prev.second.first!=el.second.first&&el!=*ans.begin()){
			cout<<"YES"<<endl;
			cout<<prev.second.first<<" "<<prev.second.second<<endl;
			cout<<el.second.first<<" "<<el.second.second<<endl;
			return 0;
		}else{
			prev=el;
		}	
	}
	cout<<"NO"<<endl;

	return 0;
}

