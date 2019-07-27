#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n,k,c = 0;
	cin>>n>>k;
	long long t=n;
	long long temp[n];
	while(n--)
		cin>>temp[c++];

	c= 0;
	n=0;
	while(t--)
		if (temp[n++]%k == 0)
			c++;

	cout<<c;

	return 0;
}