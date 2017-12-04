#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long t,n,arr[100000],maxx;
    long long j,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>arr[i];
	   j=n-1;
		i=0;
		maxx=0;
		while(j!=i)
		{
			maxx=max(min(arr[i],arr[j])*abs(i-j+1),maxx);
			if(arr[i]>arr[j])
				j--;
			else
				i++;
		}
		cout<<maxx<<endl;
	}
}
