#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x;
	float y;
	cin>>x>>y;
	
	if (x%5 == 0 && x + 0.50f <= y)
	{
		y-=(float)x+0.50f;
		cout<<y;
	}
	else
		cout<<fixed<<showpoint<<setprecision(2)<<y;
	return 0;
}