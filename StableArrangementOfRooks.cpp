#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int k,n;
	
	cin>>n>>k;
	
	if(k>(n+1)/2){
		cout<<-1<<"\n";
	}else{
		int jump=0;
		for(int i=0;i<n;i++){
			bool check=false;
			for(int j=0;j<n;j++){
				if(i%2==0&&j==jump&&!check&&k){
					cout<<"R";
					check=true;
					jump+=2;
					k--;
				}
				else cout<<".";
			}
			cout<<"\n";
		}
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

