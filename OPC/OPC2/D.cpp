#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr(100000000);
	long int i,j,t;
	arr[0]=0;
	for(i=1;i<100000000;i++)
		arr[i]=arr[i-1]+ __builtin_popcount(i);
	unsigned long long int k;
	cin>>t;
	std::vector<int>::iterator low,up;
	while(t--)
	{
		cin>>k;
		low=std::lower_bound (arr.begin(), arr.end(), k);
	}
}
