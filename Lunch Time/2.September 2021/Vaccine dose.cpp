#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,l,r;
		cin>>d>>l>>r;
		if(l<=d && d<=r)
			cout<<"Take second dose now"<<endl;
		else if(l>=d)
			cout<<"Too Early"<<endl;
		else
			cout<<"Too Late"<<endl;					
	}
	return 0;
}
