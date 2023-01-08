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
	testcase()
	{
		getstrs;
		string res = "";
		for(int i = 0; i < s.size(); i++)
		{
			s[i] = toupper(s[i]);
			if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C') res += "2";
			if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F') res += "3";
			if(s[i] == 'G' || s[i] == 'H' || s[i] == 'I') res += "4";
			if(s[i] == 'J' || s[i] == 'K' || s[i] == 'L') res += "5";
			if(s[i] == 'M' || s[i] == 'N' || s[i] == 'O') res += "6";
			if(s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') res += "7";
			if(s[i] == 'T' || s[i] == 'U' || s[i] == 'V') res += "8";
			if(s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') res += "9";
		}
		string temp = res;
		reverse(res.begin(), res.end());
		if(temp == res) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
 





