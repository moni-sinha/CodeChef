#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		long long temp=m;
		long long count=0;
		int flag=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
			  count++;
			}
			else
			{
				if(count==temp || count==m)
				{
				  flag=1;
				  break;
				}
				if(2*(m-count)<m)
				{
				  m=2*(m-count);
				}
				count=0;
			}
		}
		if(flag==1 || count==temp || count==m)
		{
			cout<<"YES"<<endl;
			continue;
		}
		else
		{
			m=2*(m-count);
			if(m<=0)
			{
			  cout<<"YES"<<endl;
			}
			else
			{
			  cout<<"NO"<<endl;
			}
		}
    }
    return 0;
}
