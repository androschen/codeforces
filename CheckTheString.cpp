#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	string s;
	
	cin>>s;
	int a=0,b=0,c=0;
	bool check=true;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]=='a'&&s[i+1]=='c'||s[i]=='b'&&s[i+1]=='a'||s[i]=='c'&&s[i+1]=='a'||s[i]=='c'&&s[i+1]=='b'){
			check=false;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='a') a++;
		else if(s[i]=='b') b++;
		else c++;
	}
	if(a==0||b==0||c==0){
		cout<<"NO"<<endl;
	}else if(a==c&&check||b==c&&check){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}

