#include<iostream>

using namespace std;

int main(){
	int t;
	
	cin>>t;
	for(int i=0;i<t;i++){
		string s;
		cin>>s;
		if(s.size()%2==1||s[0]==')'||s[s.size()-1]=='('){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	}
	return 0;
}
