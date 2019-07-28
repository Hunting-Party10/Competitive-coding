#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,g,n,i,q;
	cin>>t;
	while(t--)
	{
		cin>>g;
		while(g--)
		{
			cin>>i>>n>>q;
			if (n%2 == 0)
				cout<<n/2<<"\n";
			else
			{
				if (i == q)
				{
					cout<<n/2<<"\n";
				}
				else
				{
					cout<<n-n/2<<"\n";
				}
			}
		}
	}
	return 0;
}