#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string file;
	
	cin>>n;
	cin>>file;
	int count=0;
	for(int i=0;i<n-2;i++){
		if(file[i]=='x'&&file[i+1]=='x'&&file[i+2]=='x'){
			count++;
		}
	}
	cout<<count<<endl;
	
	return 0;
}
