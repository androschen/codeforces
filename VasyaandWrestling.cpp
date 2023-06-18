#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int a[n];
	ll sum=0;
	vector<int>first;
	vector<int>sec;
	int secBest=100,firstBest=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		if(a[i]<0){
			int ax=a[i]*-1;
			sec.push_back(ax);
		}else{
			first.push_back(a[i]);
		}
	}
	if(sum<0){
		cout<<"second"<<endl;
	}else if(sum>0){
		cout<<"first"<<endl;
	}else{
		int win=0;
		for(int i=0;i<n/2;i++){
			if(sec[i]>first[i]){
				win=1;
				break;
			}else if(first[i]>sec[i]){
				win=2;
				break;
			}
		}
		
		if(win==1){
			cout<<"second"<<endl;
		}else if(win==2){
			cout<<"first"<<endl;
		}else if(a[n-1]<0){
			cout<<"second"<<endl;
		}else{
			cout<<"first"<<endl;
		}
	}
	

	return 0;
}

