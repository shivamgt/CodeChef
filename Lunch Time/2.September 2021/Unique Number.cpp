#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%4!=0)
			cout<<"No"<<endl;
		else{
			cout<<"Yes"<<endl;
			int q1=n/4;
			int q2=2*n/4;
			int q3=3*n/4;
			int q4=n;

			for(int i=1;i<=q1;i++)
				cout<<i<<" ";
			for(int i=q3+1;i<=q4;i++)
				cout<<i<<" ";
			cout<<endl;

			for(int i=q1+1;i<=q3;i++)
				cout<<i<<" ";
			cout<<endl;
		}
	}
	return 0;
}
