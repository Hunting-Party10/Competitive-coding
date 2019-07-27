#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll a,b;
	cin>>a>>b;
	ll res=a-b;
	if(res%10 == 9)
		res--;
	else
		res++;
	cout<<res;
	return 0;
}