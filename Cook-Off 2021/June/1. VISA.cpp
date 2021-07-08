#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define    lli       long long int
#define    mod       1e9+7
#define    fio       ios_base::sync_with_stdio(false);cin.tie(NULL);
int main() {
	// your code goes here
	fio
	lli t;
	cin>>t;
	while(t--)
	{
		int x1,x2,y1,y2,z1,z2;
		cin>>x1>>x2>>y1>>y2>>z1>>z2;
		if((x2>=x1)&&(y2>=y1)&&(z2<=z1))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	/*
4
20 50 2100 1900 6 6
50 20 1900 1900 5 5
20 20 1900 1900 1 6
27 27 1920 1920 3 3
Example Output
NO
NO
NO
YES
	*/
	return 0;
}

