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

#define testcase() int t; cin >> t; while(t--)

void chuanhoa(string &s)
{
	for(int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
}

int main() 
{
    fstream input;
    input.open("DATA1.in", ios::in);
    fstream input2;
    input2.open("DATA2.in", ios::in);
    string s, s2;
    set<string> hop;
    set<string> giao;
    map<string, ll> mp;
    while(input >> s)
    {
    	chuanhoa(s);
    	hop.insert(s);
    	mp[s]++;
	}
    while(input2 >> s2)
    {
    	chuanhoa(s2);
    	hop.insert(s2);
    	if(mp[s2] >= 1)
    	{
    		giao.insert(s2);
		}
	}
	for(auto x : hop) cout << x << " ";
	cout << endl;
	for(auto x : giao)
	{
		cout << x << " ";
	}
	input.close();
	input2.close();
	return 0;
}
 





