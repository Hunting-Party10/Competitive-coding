#include <bits/stdc++.h>
#define ll long long
using namespace std;

int multiply(int ans[], int index,int factor)
{
	int rem=0;
	int temp ;
	for (int j = 0; j <= index; ++j)
	{
		//cout<<"Debug";
		temp = ans[j]* factor + rem;
		ans[j] = temp%10;
		rem = temp/10;
	}
	while(rem!=0)
	{
		//cout<<"Debug";
		ans[++index] = rem%10;
		rem = rem/10;
	}
	return index;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	int t;
	int n,ans[200];
	int ans_index;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans[0]=1;
		ans_index =0;
		for (int i = 2; i <= n; ++i)
			ans_index=multiply(ans,ans_index,i);
		for (int i = ans_index; i >= 0; --i)
			cout<<ans[i];
		cout<<"\n";
	}
	return 0;
}