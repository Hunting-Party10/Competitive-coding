//Divide and Conquer Failed TLE

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ll t,n;
	scanf("%lli",&t);
	while(t--)
	{
		cin>>n;
		ll arr[n];
		ll dp[n] = {0};
		for (ll i = 0; i < n; ++i)
			scanf("%lli",arr+i);
		cout<<count_inversions(arr,dp,n);
	}
	return 0;
}