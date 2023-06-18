#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define MAX 1000007
#define INF (int)1e9
#define pb push_back
using namespace std;

const int mx=(int)1e3+7;
const ll MOD=1e9+7;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void solve(){
	int n;
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	int cnt=0;
	bool first=true;
	int l=1,r=1;
	int up=0,down=0;

	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			if(first){
				l=i;
				r=i+1;
				first=false;
			}
			r=i+1;
			down++;
			if(up){
				up=0;
			}
		}else{
			up++;
			if(down){
				cnt++;
				down=0;
			}
		}
	}
	if(down>0) cnt++;
	
//	cout<<cnt<<"c\n";
	if(cnt>1){
		cout<<"no\n";
		return;
	}
	bool ok=true;
	for(int i=0;i<l-1;i++){
		if(a[i]>a[r-1]){
			ok=false;
		}
	}
	for(int i=r;i<n;i++){
		if(a[i]<a[l-1]){
			ok=false;
		}
	}
	if(ok){
		cout<<"yes\n";
		cout<<l<<" "<<r<<"\n";
	}else{
		cout<<"no\n";
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

