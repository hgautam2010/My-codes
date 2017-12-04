#include <bits/stdc++.h>
using namespace std;
int mn = 20;
int mnn = INT_MAX;
int get(int n)
{
	int i,c4,c7,m;
	c4 = c7 = i = 0;
	m = n;
	while(n)
	{
		if(n%10 == 4)
			c4++;
		else if(n%10 == 7)
			c7++;
		else
			return 0;
		i++;
		n/=10;
	}
	if(m < mnn and i < mn and c4 != 0 and c7 != 0 and c4 == c7)
	{
		mnn = m;
		return 1;
	}
	return 0;
}
int main()
{
	int t,p;
	string name,nam;
	cin>>t;
	nam = "-1";
	while(t--)
	{
		cin>>name>>p;
		if(get(p))
			nam = name;
	}
	cout<<nam;
	return 0;
}