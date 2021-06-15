#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int cocA, cocB, xa, xb ;
		cin>>xa>>xb>>cocA>>cocB;

		int ans=0;
		int temp1=cocA/xa;
		int temp2=cocB/xb;
		ans=temp1+temp2;
		cout<<ans<<"\n";
	}	
	return 0;
}
