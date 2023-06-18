#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int n;
	
	cin>>n;
	int words[101][101]={};
	vector<string>vs;
	
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		vs.push_back(s);
		for(int j=0;j<s.size();j++){
			words[i][j]=s[j]-'a';
		}
	}
	int a,b;
	int maxl=0;
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			if(i!=j){
				int sum=0;
				for(int k=0;k<n;k++){
					bool check=true;
					for(int l=0;l<vs[k].size();l++){
						if(words[k][l]!=i&&words[k][l]!=j){
							check=false;
						}
					}
					if(check){
						sum+=vs[k].size();
					}
				}
			maxl=max(maxl,sum);
			}
		}
	}
	cout<<maxl<<endl;

	return 0;
}

