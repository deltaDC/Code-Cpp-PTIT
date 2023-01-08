#include <bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define getstrs string s; cin >> s;
#define getarran ll a[n]; for(int i = 0; i < n; i++) cin >> a[i];
#define getarrbn ll b[n]; for(int i = 0; i < n; i++) cin >> b[i];
#define getarrbm ll b[m]; for(int i = 0; i < m; i++) cin >> b[i];
#define getmatrixanm ll a[n][m]; for(int i = 0; i < n; i++) {for(int j = 0; j < m; j++) {cin >> a[i][j];}}
#define getvectorvn vector<ll> v; for(int i = 0; i < n; i++) {int x; cin >> x; v.push_back(x);}
#define coutarran for(int i = 0; i < n; i++) { cout << a[i] << " "; }
#define getlln long long n; cin >> n;
#define getllm long long m; cin >> m;
#define getllp long long p; cin >> p;
#define getlla long long a; cin >> a;
#define getllb long long b; cin >> b;
#define getlld long long d; cin >> d;
#define getllk long long k; cin >> k;
#define getllx long long x; cin >> x;
#define getlly long long y; cin >> y;
#define getllz long long z; cin >> z;
#define getlls long long s; cin >> s;
#define getllab long long a, b; cin >> a >> b;
#define getllabc long long a, b, c; cin >> a >> b >> c;
#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

#define forloop(i, a, b) for(int i = a; i < b; i++)
#define testcase() int t; cin >> t; while(t--)

int main()
{   
	faster();
	testcase()
	{
		faster();
		getlln; getllm;
		getmatrixanm;
		int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
		ll cnt = 0;
		vector<ll> v;
		while(cnt < n * m)
		{
			if(cnt < n * m)
			{
				for(int i = c1; i <= c2; i++)
				{
					v.push_back(a[h1][i]);
					cnt++;
				} 
				h1++;
			}
			if(cnt < n * m)
			{
				for(int i = h1; i <= h2; i++)
				{
					v.push_back(a[i][c2]);
					cnt++;
				}
				c2--;
			}
			if(cnt < n * m)
			{
				if(c1 <= c2)
				{
					for(int i = c2; i >= c1; i--)
					{
						v.push_back(a[h2][i]);
						cnt++;
					}
					h2--;
				}
			}
			if(cnt < n * m)
			{
				if(h1 <= h2)
				{
					for(int i = h2; i >= h1; i--)
					{
						v.push_back(a[i][c1]);
						cnt++;
					}
					c1++;
				}
			}
		}
		for(int i = v.size() - 1; i >= 0; i--) cout << v[i] << " ";
		cout << endl;
	}
}
 








