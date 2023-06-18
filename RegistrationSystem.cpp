#include<iostream>
#include<map>

using namespace std;

int main(){
	int n;
	map<string,int> m;
	
	cin>>n;
	string s;
	int index=0;
	for(int i=0;i<n;i++){
		cin>>s;
		
		if(m[s]==0){
			m[s]=1;
			cout<<"OK"<<endl;
		}
		else if(m[s]>=1){
			cout<<s<<m[s]<<endl;
			m[s]++;
		}
	}
	return 0;
}
