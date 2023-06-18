#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,q,r,c;
	
	cin>>n>>q;
	bool maze[2][n+2];
	for(int i=0;i<2;i++){
		for(int j=0;j<=n+1;j++){
			maze[i][j]=false;
		}
	}
	int check=true;
	int barrier=0;
	while(q--){
		cin>>r>>c;
		r--;
		maze[r][c]^=true;
		for(int i=-1;i<2;i++){
			if(c+i<1||c+i>n) continue;
			if(maze[r][c]==true&&maze[1-r][c+i]==true){
				barrier++;
			}else if(maze[r][c]==false&&maze[1-r][c+i]==true){
				barrier--;		
			}	
		}
		cout<<((barrier==0)? "Yes\n" : "No\n");
	}
//	for(int i=1;i<=n;i++){
//		cout<<maze[1][i]<<" "<<maze[2][i]<<endl;
//	}

	return 0;
}

