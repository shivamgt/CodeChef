#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		string str;
		cin>>str;
		if(str[0]=='1')
			str[0]='0';
		cout<<'1'+ str<<"\n";
	}
	
	return 0;
}


