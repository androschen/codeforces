#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string s;
	
	cin>>s;
	int placeY0=1;
	int placeX1=3,placeY1=1;

	for(int i=0;i<s.size();i++){
		if(s[i]=='0'){
			cout<<1<<" "<<placeY0<<"\n";
			placeY0++;
			if(placeY0==5) placeY0=1;
		}else{
			cout<<placeX1<<" "<<placeY1%4<<"\n";
			placeY1+=2;
		}
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

