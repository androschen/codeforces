#include<iostream>

using namespace std;

int main(){
	int n;
	
	cin>>n;
	string p[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	long long int poly=0;
	for(int i=0;i<n;i++){
		if(p[i]=="Tetrahedron") poly+=4;
		else if(p[i]=="Cube") poly+=6;
		else if(p[i]=="Octahedron") poly+=8;
		else if(p[i]=="Dodecahedron") poly+=12;
		else if(p[i]=="Icosahedron") poly+=20;
	}
	cout<<poly<<endl;
	
	return 0;
}
