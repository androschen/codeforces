#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	string s;
	stack<char>st;
	
	cin>>s;
	int len=s.size();
	int count=0;
	st.push(s[0]);
	for(int i=1;i<len;i++){
		if(!st.empty()){
			char pops=st.top();
			if(s[i]==pops){
				st.pop();
				count++;
			}else{
				st.push(s[i]);
			}
		}else{
			st.push(s[i]);
		}
	}
	if(count%2==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}

