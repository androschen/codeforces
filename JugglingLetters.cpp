#include<iostream>

using namespace std;

int main(){
	int i,t,n;
	
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		int alfa[27]={0};
		int index;
		string s;
		for(int j=0;j<n;j++){
			cin>>s;
			for(int k=0;k<s.size();k++){
				index=s[k]-97;
				alfa[index]++;
			}
		}
		for(int j=0;j<26;j++){
			if(alfa[j]%n!=0){
				cout<<"NO"<<endl;
				break;
			}
			if(j==25){
				cout<<"YES"<<endl;
			}
		}
	}
	return 0;
}
