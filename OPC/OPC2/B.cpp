#include <bits/stdc++.h>
#define mod 1000000007
typedef long long ull;
using namespace std;
ull power(ull x, ull y)
{
    ull res = 1;
  
    while (y>0)
    {
        if (y & 1)
            res = (res*x)%mod;
        y = y>>1;
        x = (x*x)%mod;
    }
    return res;
}
int main()
{
	ull arr[1000000],i,j,sum,n,k,brr[1000000],vis[1000000],maxx;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
		cin>>arr[i];
	sum=0;
	memset(brr,0,sizeof(brr));
	memset(vis,0,sizeof(vis));
	for(i=0;i<k;i++)
		brr[arr[i]]++;
	for(i=0;i<k;i++)
		if(vis[arr[i]]==0)
		{
			vis[arr[i]]=1;
			sum=(sum+power(arr[i],brr[arr[i]]))%mod;
		}
	maxx=sum;
	for(j=0;i<n;i++,j++)
	{
		sum=(sum - power(arr[i],brr[arr[i]]) + power(arr[i],brr[arr[i]] - 1))%mod;
		if(maxx<sum)
			maxx=sum;
	}
	cout<<maxx;
}
