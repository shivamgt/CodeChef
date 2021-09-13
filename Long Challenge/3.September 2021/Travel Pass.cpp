#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,count0=0,count1=0;
		cin>>n>>a>>b;

		string 	s;
		cin>>s;

		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
				count0++;
			else if(s[i]=='1')
				count1++;
		}	
		int ans = a*count0 + b*count1;
		cout<<ans<<endl; 
	}
	return 0;
}
