#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n;
	vector<int>a;
	
	cin>>n;
	while(n){
		int temp=n,m=0,p=1;
		while(temp){
			if(temp%10){
				m+=p;	
			} 
			temp/=10;
			p*=10; 
		}
		a.push_back(m);
		n-=m;
//		cout<<"TES"<<n<<endl;
	}
	
	cout<<a.size()<<endl;
	sort(a.begin(),a.end());
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}

	return 0;
}

