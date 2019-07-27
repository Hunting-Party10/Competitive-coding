#include <bits/stdc++.h>
#define ll long long
using namespace std;

void alocjobs(ll completed[],ll m, ll n)
{
	ll i = 1;
	std::vector<ll> chef,ass;
	bool chefb = true;
	ll index =0;
	while(i<=n)
	{
		if (completed[index] == i)
		{
			index++;
			i++;
			continue;
		}
		if(chefb == true){
			chef.push_back(i);
			chefb = false;
		}
		else{
			ass.push_back(i);
			chefb = true;
		}
		i++;
	}
	for (auto i = chef.begin(); i != chef.end(); ++i)
		cout<<*i<<" ";
	cout<<"\n";
	for (auto i = ass.begin(); i != ass.end(); ++i)
		cout<<*i<<" ";
	cout<<"\n";
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll completed[m];
		for (int i = 0; i < m; ++i)
			cin>>completed[i];
		sort(completed,completed+m);
		alocjobs(completed,m,n);
	}

	return 0;
}