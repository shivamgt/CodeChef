#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;

		int time = 2 * (180+n);
		int sum = a+b;

		int res = time-sum;
		cout<<res<<"\n";
	}
	return 0;
}


