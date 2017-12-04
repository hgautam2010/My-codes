#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a,e,o;
	cin>>t;
	while(t--)
	{
		cin>>n;
		e=o=0;
		while(n--)
		{
			cin>>a;
			if(a%2)
				o++;
			else
				e++;
		}
		if(e>o)
			cout<<"Abhijeet"<<endl;
		else
			cout<<"Princy"<<endl;
	}
}
