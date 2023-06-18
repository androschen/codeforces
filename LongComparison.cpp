#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string x1,x2;
	int p1,p2;
	
	cin>>x1>>p1;
	cin>>x2>>p2;
	
	int n1=stoi(x1);
	int n2=stoi(x2);
	
//	cout<<n1<<" "<<n2<<"n1n2\n";

	int res= x1.compare(x2);
	if(x1.size()+p1>x2.size()+p2){
		cout<<">\n";
	}else if(x2.size()+p2>x1.size()+p1){
		cout<<"<\n";
	}else{
		if(p1==p2){
			if(n1>n2){
				cout<<">\n";
			}else if(n1<n2){
				cout<<"<\n";
			}else{
				cout<<"=\n";
			}
		}else{
			int zer;
			if(x1.size()>x2.size()){
				zer=x1.size()-x2.size();
				int multi =1;
				multi= pow(10,zer);
				
				n2*=multi;
				
				if(n1>n2){
					cout<<">\n";
				}else if(n1<n2){
					cout<<"<\n";
				}else{
					cout<<"=\n";
				}
			}else{
				zer=x2.size()-x1.size();
				int multi =1;
				multi= pow(10,zer);
				
				n1*=multi;
				
				if(n1>n2){
					cout<<">\n";
				}else if(n1<n2){
					cout<<"<\n";
				}else{
					cout<<"=\n";
				}
			}
		}
	}
	
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

