#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,u,r,d,l;
	
	cin>>n>>u>>r>>d>>l;
	if(((u>n-2||d>n-2)&&r==0&&l==0)||(l>n-2||r>n-2)&&u==0&&d==0){
		cout<<"NO\n";
	}else if((u==n&&d==n&&(r<2||l<2))||(r==n&&l==n&&(u<2||d<2))){
		cout<<"NO\n";
	}else if((u==n-1&&d==n-1&&l+r<2)||(r==n-1&&l==n-1&&u+d<2)){
		cout<<"NO\n";
	}else if(u+d==2*n-1&&(l==0||r==0||l+r<3)){
		cout<<"NO\n";
	}else if(l+r==2*n-1&&(u==0||d==0||d+u<3)){
		cout<<"NO\n";
	}else if(((u==n||d==n)&&(l==0||r==0))||((l==n||r==n)&&(u==0||d==0))){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
	}
}


int main(){
	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

