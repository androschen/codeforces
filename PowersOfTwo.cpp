#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

priority_queue<int>q;
	
void solve(){
	int n,k;
	
	cin>>n>>k;
	for(int i=0;i<=30;i++){
		if(n&(1<<i)) q.push(1<<i);
	}
//	while(!q.empty()){
//		cout<<q.top()<<"\n";
//		q.pop();
//	}
//	cout<<q.size()<<"sz\n";
	if(k>n){
		cout<<"NO\n";
		return;
	}
	if(q.size()>k){
		cout<<"NO\n";
		return ;
	}
	while(q.size()<k){
		int x=q.top();
		q.pop();
		q.push(x/2);
		q.push(x/2);
	}
	cout<<"YES\n";
	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
//    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

