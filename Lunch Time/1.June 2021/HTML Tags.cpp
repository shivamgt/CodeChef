#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		string str;
		cin>>str;
		int n=str.length();
		bool ans = false;

		if(n>3)
		{
			ans = (str[0]=='<' && str[1]=='/' && str[n-1]=='>');
			for(int i=2;i<str.size()-1;i++)
			{
				if( !(islower(str[i]) || isdigit(str[i])) )
					ans=false;
			}
		}
		if(ans)
			cout<<"Success\n";
		else
			cout<<"Error\n";
	}	
	return 0;
}

