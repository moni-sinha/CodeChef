#include<iostream>
using namespace std;
int main()
{
	long int T, res;
	int N,A,B;
	cin>>T;
	while(T--)
	{
		cin>>N>>A>>B;
		res=(2*(180+N)-(A+B));
		cout<<res<<endl;
	}
	return 0;
}
