#include <bits/stdc++.h>
#include<iostream>
#define ll long long

using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		if (k== 1 || sqrt(n) == k)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
}