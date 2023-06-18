#include<bits/stdc++.h>

using namespace std;
#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007

int main(){
	int r,n;
	
	cin>>n>>r;
	
	double p= sin((PI)/n);
	
	double rOut= (r*p)/(1-p);
	
	cout<<setprecision(7)<<rOut<<endl;
	return 0;
}

