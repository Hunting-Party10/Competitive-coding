#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int count(int cars[],int n)
{
	int c=1,d=cars[0];
	for (int i = 1; i < n; ++i)
	{
		if (cars[i]<d)
		{
			c++;
			d=cars[i];
		}
	}
	return c;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int cars[n];
		int x=n;
		int i =0;
		while(n--)
			cin>>cars[i++];
		cout<<count(cars,x)<<"\n";

	}

	return 0;
}