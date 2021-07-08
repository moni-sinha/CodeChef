#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define    lli       long long int
#define    mod       1e9+7
#define    fio       ios_base::sync_with_stdio(false);cin.tie(NULL);
int main() {
	// your code goes here
	fio
	//lli t;
	//cin>>t;
	//while(t--)
	//{
		int n,q;
		cin>>n>>q;
		lli z;
		vector<lli> v;
		//vector<int>::iterator it;
		for(lli i=0;i<n;i++)
		{
			cin>>z;
			v.push_back(z);
		}
		sort(v.begin(),v.end());
		lli y;
		for(int i=0;i<q;i++)
		{
			cin>>y;
			int pos=lower_bound(v.begin(),v.end(),y)-v.begin();
		    if(v[pos]==y)
		    	cout<<"0"<<endl;
			else if(pos%2==0)
				cout<<"POSITIVE"<<endl;
			else
				cout<<"NEGATIVE"<<endl;
			//	i++;
		}
	//}
	/*
4 6
1 3 5 100
-2
2
4
80
107
5
Example Output
POSITIVE
NEGATIVE
POSITIVE
NEGATIVE
POSITIVE
0
	*/
	return 0;
}

