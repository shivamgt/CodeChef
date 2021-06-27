#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,q,x;
	cin>>n>>q;

	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n);
	while(q--)
	{
		cin>>x;
		
		int p = lower_bound(a,a+n,x)-a;

		if(p<n && a[p]==x)
			cout<<"0\n";
		else if(p%2==0)
			cout<<"POSITIVE\n";
		else
			cout<<"NEGATIVE\n";
	}
	return 0;
}
