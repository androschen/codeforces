#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	
	cin>>n;
	string board,s,s1;
	for(int i=0;i<n;i++){
		cin>>board;
		s1+=board;
	}
	s=s1;
    reverse(s.begin(),s.end());
    if(s==s1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
	
	

	return 0;
}

