#include<bits/stc++>
#include<iostream>

void ans(std::vector<int> v)
{
	int t;
	cin>>t;
	if(t!=0)
	{
		int sum=t*(t+1)*(2*t+1)/6;
		fey(v);
		v.push_back(sum);	
	}
}

int main()
{
	std::vector<int> v1;
	std::vector<int> v2;
	std::vector<int> v2;
	ans(&v1,&v2,&v3);
	while(!v.empty())
	{
		cout<<v.pop()<<"\n";
	}
}