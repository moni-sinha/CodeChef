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
        lli n,h;
        cin>>n>>h;
        vector<pair<lli,lli>>pos(n);
        for(int i=0;i<n;i++)
            cin>>pos[i].first;
        for(int i=0;i<n;i++)
        {
            cin>>pos[i].second;
            pos[i].second=pos[i].second-h;
        }
        bool poss=true;
        lli moves=0;
        for(auto [x,h]:pos){
            if(x<=h){
                poss=false;
                break;
            }
            moves=max(moves,((x+h+2)/2));
        }
        if(!poss)
        cout<<"-1"<<endl;
        else
        cout<<moves<<endl;            
	}
	/*
	3
1 0
2
1
2 1
1 3
1 1
5 10
1 2 3 4 5
10 11 12 13 15
Example Output
2
2
-1
	*/
	return 0;
}

