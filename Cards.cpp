#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s;
	
	cin>>n;
	cin>>s;
	int z=0,en=0;
	for(int i=0;i<n;i++){
		if(s[i]=='z') z++;
		else if(s[i]=='n') en++;
	}
	for(int i=0;i<en;i++){
		cout<<"1 ";
	}
	for(int i=0;i<z;i++){
		cout<<"0 ";
	}
	return 0;
}
