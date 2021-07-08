#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod %
int main() {
	// your code goes here 
	fio
	lli t;
	cin>>t;
	while(t--)
	{
		int D,d,a,b,c;
		cin>>D>>d>>a>>b>>c;
		if(D*d <10)
			cout<<"0"<<endl;
		else if(D*d>=10 && D*d<21)
			cout<<a<<endl;
		else if(D*d>=21 && D*d<42)
			cout<<b<<endl;
		else 
			cout<<c<<endl;
	}
	/*
	3
	1 1 1 2 3
	10 1 1 2 3
	10 3 1 2 3
	
	0
	1
	2
	*/
	return 0;
}

