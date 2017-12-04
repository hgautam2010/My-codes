#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
	char str[100002];
	int n,i;
	cin>>n;
	while(n--)
	{
		cin>>i;
		cin>>str;
		if(strstr(str,"GHPRH")==NULL)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
}
