#include <bits/stdc++.h>
using namespace std;

int sum = 0;
int n,w,i,j,a[101][101];

void count()
{
	for(i = 0; i < n; i++)
	{
		sum += a[i][0];
		for(j = 0; j < w; j++)
		{
			sum += 2;
			if(j < w - 1)
				sum += abs(a[i][j] - a[i][j+1]);
			else
				sum += a[i][j];
		}
	}

	for(i = 0; i < w; i++)
	{
		sum += a[0][i];
		for(j = 0; j < n; j++)
		{
			if(j < n - 1)
				sum += abs(a[j][i] - a[j + 1][i]);
			else
				sum += a[j][i];
		}
	}
}

int main()
{
	cin>>n>>w;
	for(i = 0; i < n; i++)
		for(j = 0; j < w; j++)
			cin>>a[i][j];
	count();
	cout<<sum;
}