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

//1 1 2 1 3 4 5 2 8
//1 2 4 5 8 12 17 19 27

int main()
{   
	testcase()
	{
		getlln;
		ll q; cin >> q;
		getarran;
		ll prefix[n] = {};
		prefix[0] = a[0];
		for(int i = 1; i < n; i++)
		{
			prefix[i] = prefix[i - 1] + a[i]; //mang cong don
		}
		for(int i = 0; i < q; i++)
		{
			ll l, r; cin >> l >> r;
			l--; r--;
			if(l == 0) cout << prefix[r];
			else cout << prefix[r] - prefix[l - 1];
			cout << endl;
//			ll res = 0;
//			for(int i = l; i <= r; i++) res += a[i];
//			cout << res << endl;
		}
		cout << endl;
	}
}
 





