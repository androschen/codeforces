#include<bits/stdc++.h>

#define PI 3.141592653589
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		double r= 1/(2*tan(PI/(2*n)));
		
		
		cout<<setprecision(9)<<r*2<<endl;
	}

	return 0;
}

