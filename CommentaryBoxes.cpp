#include<iostream>

using namespace std;

int main(){
	int a,b;
	long long int n,m;
	
	cin>>n>>m>>a>>b;
	if(n%m==0){
		cout<<0<<endl;
	}else{
		long long int tozero=n*b;
		long long int demolish,newbox;
		if(n>m){
			demolish=(n-m)*b;
			long long int newbox1=(((n/m)+1)*m-n)*a;
			long long int newbox2=(n-((n/m)*m))*b;
			newbox=newbox2;
			if(newbox1<newbox2){
				newbox=newbox1;
			}
			if(newbox>demolish){
				cout<<demolish<<endl;
			}else{
				cout<<newbox<<endl;
			}
		}else{
			newbox=(m-n)*a;
			if(newbox<tozero){
				cout<<newbox<<endl;
			}else{
				cout<<tozero<<endl;
			}
		}
	}
	return 0;
}
