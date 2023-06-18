#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,a,b;
	
	cin>>t;
	while(t--){
		cin>>a>>b;
		int value=(a^a)+(b^a);
		
		cout<<value<<endl;
	}
	return 0;
}
