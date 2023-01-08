#include <bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define testcase() int t; cin >> t; while(t--)

void solve(int n)
{
	//m -> slg so trong 2 array
	int m = 8 * n * n;
	int c1[m];
	c1[0] = 8 * n * n + 2 * n; //10
	int curr = c1[0];
	int x = 1, step = 2, idx = 1;
	while(idx < m)
	{
		for(int i = 0; i < step; i++)
		{
			curr = c1[idx++] = (curr - 4 * n * x); //10 -> 6 -> 2
			if(idx >= m) break;
		}
		if(idx >= m) break;
		for(int i =0; i < step; i++)
		{
			curr = c1[idx++] = curr + x; // 2 -> 3 -> 4
			if(idx >= m) break;
		}
		x *= -1;
		step += 2;
	}
	int c2[m];
	for(int i = 0; i < m; i++)
	{
		c2[i] = 16 * n * n + 1 - c1[i];
	}
	for(auto x : c1) cout << x << " ";
	cout << endl;
	for(auto x : c2) cout << x << " ";
}

int main()
{
    testcase()
    {
    	int n; cin >> n;
    	solve(n);
    	cout << endl;
	}
}
 





