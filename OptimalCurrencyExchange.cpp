#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,d,e;
	
	cin>>n>>d>>e;

	int loop=n/d;
	int eu=e*5;
	int ans=n;
	while(loop>=0){
		int dollar=n-(loop*d);
		int euro=dollar/eu;
		int left=dollar-eu*euro;
		ans=min(ans,left);
		loop--;
	}
	cout<<ans<<endl;

	return 0;
}

