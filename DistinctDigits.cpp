#include<bits/stdc++.h>

using namespace std;

int main(){
	int l,r;
	
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		set<int>s;
		int x=i;
		int count=0;
		while(x>0){
			s.insert(x%10);
			x/=10;
			count++;
		}
		if(s.size()==count){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
