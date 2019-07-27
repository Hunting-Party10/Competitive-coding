#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	ll n;
	ll sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		while(n>0)
		{
			ll rem = n%10;
			sum+=rem;
			n/=10;
		}
		cout<<sum<<"\n";
	}
	return 0;
}