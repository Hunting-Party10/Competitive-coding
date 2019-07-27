#include <bits/stdc++.h>
#include<iostream>
using namespace std;

long find(std::vector<long> ranks,long score,std::vector<long> start,long end)
{
	long l = 0;
	long m;
	while(l<=end)
	{
		m = (l+end -1)/2;
		if (ranks[start[m]] == score)
			return m+1;
		else if(ranks[start[m]] >score)
			l = m+1;
		else
			end = m-1;
	}
	return m+1;
	
}

int main(int argc, char const *argv[])
{
	std::vector<long> ranks,plays,start;
	int m;
	cin>>m;
	long score,prev_score = -1;
	long pos = 1;
	start.push_back(0);
	while(m--)
	{

		cin>>score;
		ranks.push_back(score);
		if (prev_score == -1)
			prev_score= score;
		else if (score == prev_score)
			pos++;
		else{
			cout<<"Found Score for first time :"<<score<<"\n";
			start.push_back(pos);
			prev_score= score;
		}
	}
	/*
	cin>>m;
	while(m--)
	{
		cin>>score;
		plays.push_back(score);
	}
	*/
	//long i=0;
	for (long i = 0; i < start.size(); ++i)
	{
		cout<<start[i]<<" ";
	}
	m = start.size();
	/*
	while(i<plays.size())
	{
		m =find(ranks,plays[i++],start,m);
		cout<<m<<"\n";
	}
	*/
	return 0;
}