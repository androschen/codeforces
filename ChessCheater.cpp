#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int t,n,k;
	string s;
	
	cin>>t;
	while(t--){
		cin>>n>>k>>s;
		int w=0,ws=0,l=0;
		vector<int>ls;
		for(int i=0;i<n;i++){
			if(s[i]=='W'){
				w++;
				if(i==0||s[i-1]=='L') ws++;
			}
			if(s[i]=='L'){
				l++;
				if(i==0||s[i-1]=='W') ls.push_back(0);
				ls.back()++;
			}
		}
		if(w+k>=n){
			cout<<2*n-1<<endl;
			continue;
		}
		if(w==0){
			if(k>0) cout<<2*k-1<<endl;
			else cout<<0<<endl;
			continue;
		}
		if(s[0]=='L') ls.front()=1e9;
		if(s[n-1]=='L') ls.back()=1e9;
		w+=k;
		sort(ls.begin(),ls.end());
		for(int x: ls){
			if(x>k) break;
			k-=x;
			ws--;
		}
		cout<<2*w-ws<<endl;
	}

	return 0;
}

