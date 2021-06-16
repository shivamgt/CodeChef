#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		ll D, d, P, Q;
		cin>>D>>d>>P>>Q;

		ll a = P;
		ll n = D/d;
		ll diff = Q;
		ll rem = D%d;

		ll apSum = d * ( n * ( 2*a + (n-1)*diff )/2 );
		ll remSum= rem*( a + n*diff);
		ll ans = apSum + remSum;
		cout<<ans<<"\n";
	}
	return 0;
}
