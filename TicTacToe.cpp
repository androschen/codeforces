#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string tictac[12],s;
	int x,y,idx=1;
	
	for(int i=0;i<9;i++){
		cin>>s;
        tictac[i] = s;
        cin>>s;
        tictac[i] += s;
        cin>>s;
        tictac[i] += s;
	}
	cin>>x>>y;
	x=(x-1)%3;
	y=(y-1)%3;
	bool check=false;
	for(int i=x*3;i<x*3+3;i++){
		for(int j=y*3;j<y*3+3;j++){
			if(tictac[i][j]=='.'){
				check=true;
				break;
			}
		}
	}
	if(check){
		for(int i=x*3;i<x*3+3;i++){
			for(int j=y*3;j<y*3+3;j++){
				if(tictac[i][j]=='.'){
					tictac[i][j]='!';
				}
			}
		}
	}else{
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				if(tictac[i][j]=='.'){
					tictac[i][j]='!';
				}
			}
		}
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cout<<tictac[i][j];
			if((j+1)%3==0&&j!=8){
				cout<<" ";
			}
		}
		cout<<"\n";
		if((i+1)%3==0&&i!=8){
			cout<<"\n";
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

