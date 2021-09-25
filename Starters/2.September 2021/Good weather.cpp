#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[7];
		int sunny=0,rainy=0;
		for(int i=0;i<7;i++)
			cin>>a[i];
		for(int i=0;i<7;i++)
		{
			if(a[i]==1)	sunny++;
			else	rainy++;	
		}
		if(sunny>rainy)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
