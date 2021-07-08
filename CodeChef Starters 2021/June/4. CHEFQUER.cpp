#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,q;
    cin>>n>>q;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
    	cin>>a[i];
    while(q--)
    {
    	long long nq;
    	cin>>nq;
    	if(nq==1)
    	{
    		long long l,r,x;
    		cin>>l>>r>>x;
    		for(int i=l-1;i<r;i++)
    			a[i]=a[i]+((x+i+1-l)*(x+i+1-l));
		}
		else if(nq==2)
		{
			long long y;
			cin>>y;
			cout<<a[y-1]<<endl;
		}
	}	
    return 0;
}
