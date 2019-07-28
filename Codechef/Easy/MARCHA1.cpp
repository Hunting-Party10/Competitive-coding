#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool isSubsetSum(int set[],int n,int sum)
{
   if (sum == 0) 
     return true; 
   if (n == 0 && sum != 0) 
     return false; 
   if (set[n-1] > sum) 
     return isSubsetSum(set, n-1, sum); 
   return isSubsetSum(set, n-1, sum) ||  
                        isSubsetSum(set, n-1, sum-set[n-1]); 
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int set[n] ;
		int temp,x=n;
		int i =0;
		while(x--)
		{
			cin>>temp;
			set[i++]=temp;
		}
		bool flag = isSubsetSum(set,n,m);
		if (flag == true)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
