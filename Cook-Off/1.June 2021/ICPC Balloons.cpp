#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int N;
		cin>>N;
		int A[N];
		for(int i=1;i<=N;i++)
			cin>>A[i];
		int count=0;
		int ans=0;
		for(int i=1;i<=N;i++)
		{
			count++;
			if(A[i]>=1 && A[i]<=7)
			{
				ans++;
				if(ans==7)
					break;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
