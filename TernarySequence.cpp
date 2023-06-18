#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,x1,x2,x3,y1,y2,y3;
	
	cin>>t;
	while(t--){
		cin>>x1>>x2>>x3;
		cin>>y1>>y2>>y3;

		int total=0;
		int maksnum=min(x3,y2);
		total+=2*maksnum;
		x3-=maksnum;
		y2-=maksnum;
		int maks=max(0,y3-x3-x1);
		total-=2*maks;
		
		cout<<total<<endl;
	}

	return 0;
}

