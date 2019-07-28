#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	ll a,n,k;
	cin>>a>>n>>k;
	ll no[k] ;
	ll i=0;
	n++;
	while(i<k)
	{
		no[i++] = a%n;
		a=a/n;	
	}
	for (int i = 0; i < k; ++i)
		cout<<no[i]<<" ";
	return 0;
}