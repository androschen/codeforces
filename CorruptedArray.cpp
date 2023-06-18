#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		int b[n+2];
		ll sum=0;
		for(int i=0;i<n+2;i++){
			cin>>b[i];
			sum+=b[i];
		}
		int check=0;
//		    int i=1;
		multiset<int> have(b, b+n+2);
		multiset<int>::iterator itr;
//		for (itr = have.begin(); itr!= have.end(); ++itr){
//        	cout << *itr << " " ;
//		}
		for (int x : b) {
		    have.erase(have.find(x));
		    sum -= x;
//			itr=have.find(9);
//			cout<<"find"<<*itr<<endl;
//			auto d=have.end();
//			cout<<"end"<<*d<<endl;
//		    cout<<"SUM"<<sum<<endl; // have.find mencari iterative sampai have.end
		    if (sum % 2 == 0 && sum <= 2000000000 && have.find(sum/2) != have.end()){
		      have.erase(have.find(sum / 2));
		      for (int y : have) {
		        cout << y << " ";
		      }
		      cout << endl;
		      check=1;
		      break;
		    }
//		    cout<<i++<<endl;
		    sum+= x;
		    have.insert(x);
		}
		if(!check){
			cout<<-1<<endl;	
		}
	}
	
	return 0;
}

