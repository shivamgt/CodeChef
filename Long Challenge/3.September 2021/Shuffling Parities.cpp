#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ans=0, x=0;
		int even2=0,odd2=0;
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
			cin>>a[i];

		int even1 = n/2;
		int odd1 = n-even1; 

		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
				even2++;
			else
				odd2++;
		}
		if( (odd2 - even1) > 0 )
			x= odd2 - even1;
		if( (even2 - odd1) > 0 )
			x= even2 - odd1;

		ans = n - x;
		cout<<ans<<endl;
	}
	return 0;
}
