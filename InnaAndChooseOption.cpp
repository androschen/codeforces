#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t;
	string s;
	int div[]={1,2,3,4,6,12};
	
	
	cin>>t;
	while(t--){
		cin>>s;
		
		vector<int>result;
		for(int i=0;i<6;i++){
			int a=div[i],b=12/a;
			int j,k;
			for( j=0;j<b;j++){
				for(k=0;k<a;k++){
					if(s[j+b*k]=='O') break;
				}
				if(k>=a) break;
			}
			if(j<b) result.push_back(a);
		}
		cout<<result.size();
		for(int i=0;i<result.size();i++){
			cout<<" "<<result[i]<<"x"<<12/result[i];
		}
		cout<<endl;
	}

	return 0;
}

