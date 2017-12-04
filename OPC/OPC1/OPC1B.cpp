#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,c,i;string s;
	cin>>t;
	int arr[27];
	while(t--)
	{
		cin>>s;
		memset(arr,0,sizeof(arr));c=0;
		for(i=0;i<s.length();i++)
			arr[s[i]-'a']=1;
		for(i=0;i<27;i++)
			c+=arr[i];
		if(c==20)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
