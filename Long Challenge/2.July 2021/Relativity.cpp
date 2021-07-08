#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int g,c;
		cin>>g>>c;

		int height = (c*c)/(2*g);
		cout<<height<<"\n"; 
	}
	return 0;
}

