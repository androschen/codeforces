#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	int a[n];
	int cnt=0;
	int one=0,two=0,three=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int idx=0;
	while(a[idx]==3) idx++;
	for(int i=idx;i<n;i++){
		if(a[i]==0) cnt++;
		else if(a[i]<3&&a[i]==a[i-1]&&i>0){
			a[i]=0;
			cnt++;
		}else if(a[i]==3){
			a[i]=3-a[i-1];
		}
		
	}

	cout<<cnt<<"\n";
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

