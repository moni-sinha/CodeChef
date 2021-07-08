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
		int n;
		cin>>n;
		int z;
		vector<int> v;
		//vector<int>::iterator it;
		for(int i=0;i<n;i++)
		{
			cin>>z;
			v.push_back(z);
		}
		int count=0;
		int i=0;
		while(i<n)
		{
			//for(int j=1;j<=7;j++)
			//	it=find(v.begin(),v.end(),j);
				//v.erase(v.begin());
				if(v[i]>=1 && v[i]<=7)
					count++;
			if(count==7)
				break;
			i++;
		}
		cout<<i+1<<endl;
		
	}
	/*
3
7
1 2 3 4 5 7 6
8
8 7 6 5 4 3 2 1
9
7 4 3 5 6 1 8 2 9
Example Output
7
8
8
	*/
	return 0;
}

