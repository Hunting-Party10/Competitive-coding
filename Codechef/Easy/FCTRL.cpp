/*
Calculate only the number of multiples of 5 and its subsequent powers since 10 = 5*2 but there are more no of 2s than there are 5s
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int count(ll n)
{
	ll start = 5;
	ll c = 0;
	while( n /start >=1)
	{
		c += n/start;
		start*=5;
	}
	return c;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	ll n;
	while(t--)
	{
		cin>>n;
		cout<<count(n)<<"\n";
	}
	
	return 0;
}