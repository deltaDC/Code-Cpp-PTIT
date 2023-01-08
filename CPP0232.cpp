#include <bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define testcase() int t; cin >> t; while(t--)

int n, m, a[20][20];

int maxarea(int n, int m)
{
	int b[n + 1][m + 1];
	for(int i = 0; i < m; i++)
	{
		b[0][i] = a[0][i];
		for(int j = 1; j < n; j++)
		{
			b[j][i] = (a[j][i] == 0) ? 0 : b[j - 1][i] + 1;
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		int cnt[n + 1] = {};
		for(int j = 0; j < m; j++)
		{
			cnt[b[i][j]]++;
		}
		
		int col = 0;
		for(int j = n; j >= 0; j--)
		{
			if(cnt[j] > 0)
			{
				for(int k = 0; k < cnt[j]; k++)
				{
					b[i][col] = j;
					col++;
				}
			}
		}
	}
	
	int curr, max = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			curr = (j + 1) * b[i][j];
			if(curr > max) max = curr;
		}
	}
	return max;
}

int main()
{
    testcase()
    {
    	cin >> n >> m;
    	for(int i = 0; i < n; i++)
    	{
    		for(int j = 0; j < m; j++)
    		{
    			cin >> a[i][j];
			}
		}
		cout << maxarea(n, m) << endl;
	}
}
 





