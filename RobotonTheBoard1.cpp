#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,m;
	string s;
	
	cin>>n>>m>>s;
	int x=0,y=0;
	int maxposX=0,maxposY=0,minposX=0,minposY=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='L') x++;
		else if(s[i]=='R') x--;
		else if(s[i]=='D') y--;
		else y++;
		
		maxposX=max(maxposX,x);
		minposX=min(minposX,x);
		maxposY=max(maxposY,y);
		minposY=min(minposY,y);
		
		if(maxposX-minposX>=m){
			if(x==maxposX){
				maxposX--;
			}
			break;
		}
		if(maxposY-minposY>=n){
			if(y==maxposY){
				maxposY--;
			}
			break;
		}
	}
	cout<<1+maxposY<<" "<<1+maxposX<<"\n";
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

