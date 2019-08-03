#include <bits/stdc++.h>
#include<iostream>
#define ll long long

using namespace std;

ll max(ll a,ll b ){return (a>b)?a:b;}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n],b[n],c[n];
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		for (int i = 0; i < n; ++i)
			cin>>b[i];
		for (int i = 0; i < n; ++i)
			c[i] = max(0,a[i]*20 - b[i]*10);
		ll m = 0;
		for (int i = 0; i < n; ++i)
			if( max(m,c[i]) != m)
				m = c[i];
		cout<<m<<"\n";
	}
	return 0;
}