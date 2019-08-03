#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(int argc, char const *argv[])
{
	ll n,a,b,c,x=0,y=0,z=0;
	cin>>n>>a>>b>>c;
	n+=1;
	n*=3;
	for (int i = 1; i <= n; )
	{
		x+=a;
		i++;
		if (((x%b ==0 && x<=y) || (x%c == 0 && x <= z)) && x%n != 0)
		{
			cout<<"A Has to pay"<<i;
			return 0;
		}
		y+=b;
		i++;
		if (((y%a ==0 && y<=x) || (y%c == 0 && y <= z)) && y%n !=0)
		{
			cout<<"B Has to pay"<<i;
			return 0;
		}
		z+=c;
		i++;
		if (((z%a ==0 && z<=x) || (z%b == 0 && z <= y)) && z%n !=0)
		{
			cout<<"C Has to pay"<<i;
			return 0;
		}
		cout<<x<<" "<<y<<" "<<z<<"\n";
	}
	cout<<"3000000000";
	return 0;
}