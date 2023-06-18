#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n,W;
	
	cin>>t;
	while(t--){
		cin>>n>>W;
		int w[n];
		for(int i=0;i<n;i++){
			cin>>w[i];
		}
		multiset<int> ms(w,w+n);

		int cnt=1;
		int width=W;
		while(!ms.empty()){
			auto x=ms.upper_bound(width);
			if(x!=ms.begin()){
//				cout<<"Xbefore--"<<*x<<endl;
				x--;
//				cout<<"X--"<<*x<<endl;
				width-=*x;
				ms.erase(x);
			}else{
				width=W;
				cnt++;
			}
//			cout<<"auto x"<<*x<<endl;
		}
		cout<<cnt<<endl;
	}

	return 0;
}

