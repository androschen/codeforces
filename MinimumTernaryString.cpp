#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string s;
	
	cin>>s;
	int z=0,o=0;
	vector<int>tw;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'){
			o++;
		}else if(s[i]=='2'){
			tw.push_back(2);
		}else{
			if(tw.size()==0){
				z++;
			}else{
				tw.push_back(0);
			}
		}
	}
	for(int i=0;i<z;i++){
		cout<<0;
	}
	for(int i=0;i<o;i++){
		cout<<1;
	}
	for(int i=0;i<tw.size();i++){
		cout<<tw[i];
	}
	cout<<"\n";
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

