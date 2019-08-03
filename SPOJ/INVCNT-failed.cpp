//Divide and Conquer Failed TLE

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll count_inversions(ll *arr,ll *dp,ll n)
{
	if(n == 2){
		if (arr[0] > arr[1]){
			dp[1] =1;
			return dp[1];
		}
		dp[1] = 0;
		return dp[1];
	}
	else
	{

		ll c = 0;
		for (ll i = 0; i < n; ++i)
			if (arr[i] > arr[n-1])
				c++;
		dp[n-1] = count_inversions(arr,dp,n-1) + c;
		return dp[n-1];
	}

}

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