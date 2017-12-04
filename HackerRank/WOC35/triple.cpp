#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n,m,k;
	cin>>n>>m>>k;
	int ma[n][n];
	memset(ma,0,sizeof(ma));
	ma[0][0] = m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j && i != 0 && j != 0)
				ma[i][j] = ma[i-1][j-1] + k;
			else if(i > j)
				ma[i][j] = ma[i-1][j] - 1;
			else if(i < j)
				ma[i][j] = ma[i][j - 1] - 1;
			cout<<ma[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}