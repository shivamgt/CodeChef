#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int x;
		cin>>x;

		int diff = b-a;
		int res = diff/x;
		cout<<res<<"\n";
	}
	return 0;
}

