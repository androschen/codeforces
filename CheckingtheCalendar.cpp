#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	string day[]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	int month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string d1,d2;
	
	cin>>d1;
	cin>>d2;
	
	if(d1==d2){
		cout<<"YES"<<endl;
	}else{
		int idx=-1;
		for(int i=0;i<7;i++){
			if(d1==day[i]){
				idx=i;
			}
		}
		if(day[(idx+2)%7]==d2||day[(idx+3)%7]==d2){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

