#include <iostream>
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
		lli dd,d,p,q;
		cin>>dd>>d>>p>>q;
		lli n=dd/d;
		lli rem=dd%d;
		
	    lli nq=n*q;
	    lli p2=2*p;
	    lli res=n*(p2+nq-q)/2;
	    res=res*d;
	    
		if(rem!=0)
		{
		    res=res+rem*(p+nq);
		}
		cout<<res<<endl;
	}
		/*
		lli np=n*p;
		int nnq=(n-1)*(n)*q/2;
		lli nq=n*q;
		
		lli s1=d*(np+nnq);
		lli s2=rem*(p+nq);
		
		lli res=s1+s2;
		cout<<res<<endl;
	}
	/*
	3
	2 1 1 1
	3 2 1 1
	5 2 1 2
	
	3
	4
	13
	*/
	return 0;
}
