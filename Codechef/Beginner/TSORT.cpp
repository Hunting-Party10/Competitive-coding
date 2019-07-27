#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	std::vector<ll> a;;
	cin>>t;
	ll i;
	while(t--){
		cin>>i;
		a.push_back(i);
	}
		
	sort(a.begin(),a.end());
	for (int j = 0; j < a.size(); ++j)
		cout<<a[j]<<"\n";
	return 0;
}