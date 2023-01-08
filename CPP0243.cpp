#include <bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define getstrs string s; cin >> s;
#define getarran ll a[n]; for(int i = 0; i < n; i++) cin >> a[i];
#define getarrbn ll b[n]; for(int i = 0; i < n; i++) cin >> b[i];
#define getmatrixanm ll a[n][m]; for(int i = 0; i < n; i++) {for(int j = 0; j < m; j++) {cin >> a[i][j];}}
#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

#define testcase() int t; cin >> t; while(t--)

int main() 
{
   testcase()
   {
		int n, m; cin >> n >> m;
		int a[n], b[m];
		map<int, int> mp;
		vector<int> v;
		vector<int> giao(lim);
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			giao[a[i]] = 0;
			mp[a[i]]++;
		} 
		for(int i = 0; i < m; i++)
		{
			cin >> b[i];
			if(giao[b[i]] == 0) giao[b[i]] = 1;
		} 
		for(int i = 0; i < m; i++)
		{
			if(giao[b[i]] == 1)
			{
				for(int j = 0; j < mp[b[i]]; j++)
				{
					cout << b[i] << " ";
					giao[b[i]] = -1;
				} 
			}
		} 
		for(int i = 0; i < n; i++)
		{
			if(giao[a[i]] == 0) v.push_back(a[i]);
		}
		sort(v.begin(), v.end());
		for(auto x : v) cout << x << " ";
		cout << endl; 
   }
}
 





