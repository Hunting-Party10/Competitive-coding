#include<iostream>
#include<vector>
using namespace std;
void ans(vector<int> *s,vector<int> *type)
{
	int t1,t2,t3;
	cin>>t1>>t2>>t3;
	if(t1!=0 || t2!=0 || t3!=0)
	{
			if(t1-t2 == t2-t3)
			{
				s->push_back(t3+t3-t2);
				type->push_back(1);
			}
			else
			{
				s->push_back(t3*(t3/t2));
				type->push_back(0);
			}
			ans(s,type);
	}
}

int main()
{
	vector<int> s;
	vector<int> type;
	ans(&s,&type);
	auto e=s.end();
	auto j=type.begin();
	for(auto i=s.begin();i!=e;i++)
	{
		if(*j==1)
			cout<<"AP "<<*i<<"\n";
		else
			cout<<"GP "<<*i<<"\n";
		j++;
	}
}
