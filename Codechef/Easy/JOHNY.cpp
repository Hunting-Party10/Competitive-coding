#include <bits/stdc++.h>
#define ll long long
using namespace std;

int bin(ll songs[],ll n,ll query)
{
	ll l = 0,r=n-1,m;
	while(l<=r)
	{
		m=(l+r)/2;
		if(songs[m] == query)
			return m+1;
		else if(songs[m]<query)
			l= m+1;
		else
			r=m-1;
	}
	return -1;

}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,songs[100],query;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		for (int i = 0; i < n; ++i)
			cin>>songs[i];
		
		cin>>query;
		query = songs[query-1];
		sort(songs,songs+n);
		cout<<bin(songs,n,query)<<"\n";
	}
	return 0;
}