#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;



ll calculate(char *arg)
{
	ll dp[5000];
	memset(dp,0,5000);
	dp[0] =1;
	int len = strlen(arg);
	for (int i = 1; i < len; ++i)
	{
		char prevdig[2]= {arg[i-1],'\0'}; 
		char curdig[2] = {arg[i],'\0'};
		int n1 = atoi(prevdig);
		int n2 = atoi(curdig);
		if(n2 == 0 && n1 >2)
			return 0;
		int n = n1*10 +n2;
		if (n==0)
			return 0;
		if(n <= 26 && n2 != 0 && prevdig[0] != '0'){
			//cout<<"Case 1\n";
			dp[i] = dp[i-1];
			if (i != 1)
				dp[i]+=dp[i-2];
			else
				dp[i]++;
		}
		else if(n2 == 0){
			if(i == 1)
				dp[i] =dp[i-1];
			else
				dp[i] = dp[i-2];
		}
		else{
			//cout<<"Case 2\n";
			dp[i] = dp[i-1];
		}
	}
	return dp[len-1];
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char t[5000];

	cin>>t;
	while(t[0] != '0')
	{
		cout<<calculate(t)<<"\n";
		cin>>t;
	}
	return 0;
}