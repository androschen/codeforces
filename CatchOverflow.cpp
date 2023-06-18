#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define MAX 1000007
#define INF (int)1e11
#define pb push_back
using namespace std;

const int mx=(int)1e3+7;
const ll MOD=1e9+7;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void solve(){
	int l,n;
	string s;
	
	cin>>l;
	ll x=0;
	stack<ll> st;
	st.push(1);
	ll overflow= (ll)(1<<31) * 2 *-1 -1;
	bool over=false;
	for(int i=0;i<l;i++){
		cin>>s;
		if(s=="for"){
			cin>>n;
			if(st.top()*n>overflow){
				st.push(INF);
			}else{
				st.push(st.top()*n);
			}
		}else if(s=="end"){
			st.pop();
		}else{
			if(st.top()!=INF){
				x+=(st.top());
			}else{
				over=true;			
			}
			if(x>overflow){
				over=true;
			}
		}
	}
//	while(!st.empty()){
//		cout<<st.top()<<"\n";
//		st.pop();
//	}
	ll bitwise= (1<<31);
	if(x>overflow||over){
		cout<<"OVERFLOW!!!\n";
	}else{
		cout<<x<<"\n";
	}
//	cout<<(1<<31)<<"\n";
//	cout<<overflow<<"\n";
//	cout<<bitwise<<"\n";
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

