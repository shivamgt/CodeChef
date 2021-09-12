#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e;
		cin>>a>>b>>c>>d>>e;

		if( a+b <= d && c <= e)
			cout<<"Yes\n";
		else if( a+c <= d && b <= e)
			cout<<"Yes\n";
		else if( b+c <= d && a <= e)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
