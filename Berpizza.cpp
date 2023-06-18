#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

set <ll> elem[500005];

int main(){
	int q,m,f;
	
	cin>>q;
	set<pair<int,int>>s1;	
	set<pair<int,int>>s2;
	vector<int>maxs;
	int i=1;
	while(q--){
		cin>>f;
		if(f==1){
			cin>>m;
			elem[m].insert(i);
            s1.insert({m,i});
            s2.insert({i,m});
			i++;
		}else if(f==2){
			auto it2=s2.begin();
			s2.erase(it2);
			auto it1= *it2;
			auto reit=s1.find({it1.second,it1.first});
			s1.erase(reit);
			cout<<it1.first<<" ";
		}else{
			auto itr2= s1.end();
            itr2--;
            auto var = *itr2;
            ll el1 = var.first;
            ll el2 = *elem[el1].begin();
            elem[el1].erase(elem[el1].begin());
            s1.erase(s1.find({el1,el2}));
            auto remit = s2.find({el2,el1});
            s2.erase(remit);
            cout<<el2<<' ';
		}
	}

	return 0;
}

