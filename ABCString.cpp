#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	
	cin>>t;
	while(t--){
		string a,s,b;
		bool check=true,check2=true;
		stack<char>st;
		stack<char>bt;
		
		cin>>a;
		char right;
		for(int i=a.size()-1;i>=0;i--){
			if(a[0]!=a[i]) right=a[i];
			break;
		}
		for(int i=0;i<a.size();i++){
			if(a[i]==a[0]){
				s+='(';
				b+='(';
			}else if(a[i]==right){
				s+=')';
				b+=')';
			}else{
				s+=')';
				b+='(';
			}
		}
		
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				st.push(s[i]);
			}else{
				if(st.empty()){
					check= false;
					break;
				}
				char pops= st.top();
				if(s[i]==')'&& pops!='('){
					check= false;
					break;
				}
				st.pop();
			}
		}
			
		if(check&&st.empty()){
			cout<<"YES"<<endl;
			continue;
		}
		
		for(int i=0;i<b.size();i++){
			if(b[i]=='('){
				bt.push(b[i]);
			}else{
				if(bt.empty()){
					check2= false;
					break;
				}
				char pops= bt.top();
				if(b[i]==')'&& pops!='('){
					check2= false;
					break;
				}
				bt.pop();
			}
		}	
		if(check2&&bt.empty()){
			cout<<"YES"<<endl;
			continue;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
