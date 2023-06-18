#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,k;
	
	cin>>t;
	while(t--){
		string s;
		cin>>n>>k;
		cin>>s;
		int count=0;
		bool check=true;
		int left=0,right=n-1;
		while(s[left]==s[right]){
			count++;
			left++;
			right--;
			if(left>=right){
				break;
			}
		}
//		cout<<count<<endl;
		if(n%2==0&&k==n/2){
			cout<<"NO"<<endl;
		}else if(k==0||count>=k){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
