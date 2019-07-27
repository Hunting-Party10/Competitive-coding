#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mindiff(ll a[], ll n)
{
	ll mindif = a[n-1] - a[0];
	for (int i = 0; i < n-1; ++i)
		if (a[i+1]-a[i]<mindif)
			mindif = a[i+1]-a[i];
	return mindif;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	ll a[5000];
	ll index ;
	ll n;
	while(t--)
	{
		cin>>n;
		ll x= n;
		index = 0;
		while(x--)
			cin>>a[index++];
		sort(a,a+index);
		cout<<mindiff(a,n)<<"\n";

	}

	return 0;
}