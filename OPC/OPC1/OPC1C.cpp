#include <bits/stdc++.h>
using namespace std;
bool sortby(pair<int,int> a,pair<int,int> b)
{
	if(a.first > b.first)
		return 1;
	else if(a.first < b.first)
		return 0;
	else if(a.second > b.second)
		return 1;
	else
		return 0;
}
int main()
{
	int n,i,a,b,q;
	cin>>n;
	vector<pair<int,int> > v(200001);
	for(i=0;i<200001;i++)
	{
		v[i].first=0;
		v[i].second=i-100000;
	}
	for(i=0;i<n;i++)
	{
		cin>>a;
		v[a+100000].first++;
	}
	sort(v.begin(),v.end(),sortby);
	cin>>q;
	while(q--)
	{
		cin>>a;
		cout<<v[a-1].second<<endl;
	}
}
