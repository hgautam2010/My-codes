#include <bits/stdc++.h>
#define mod 1000000007
typedef unsigned long long ull;
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
	ull arr[1000000]={0},i,j,l,r,sum,n;
	arr[0]=arr[1]=1;
	for(i=2;i*i<1000000;i++)
	{
		if(arr[i]==0)
		{
			j=2;
			while(i*j<=1000000)
				{arr[j*i]=1;j++;}
		}
	}
	cin>>n;
	while(n--)
	{
		sum=0;
		cin>>l>>r;
		for(i=l;i<=r;i++)
			if(arr[i]==0)
				sum=(sum+power(i,i))%mod;
		cout<<sum<<endl;
	}
}
