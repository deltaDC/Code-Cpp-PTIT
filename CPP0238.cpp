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

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
char a[1001][1001];
int n, m;

void dfs(int i, int j)
{
	a[i][j] = '!';
	for(int k = 0; k < 4; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'O')
		{
			dfs(i1, j1);
		}
	}
}

void input()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++) cin >> a[i][j];
	}
	//xet bien cot
	for(int i = 1; i <= n; i++)
	{
		if(a[i][1] == 'O') dfs(i, 1);
		if(a[i][m] == 'O') dfs(i, m);
	}
	
	//xet bien hang
	for(int i = 1; i <= m; i++)
	{
		if(a[1][i] == 'O') dfs(1, i);
		if(a[n][i] == 'O') dfs(n, i);
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(a[i][j] != '!')
			{
				cout << "X ";
			}
			else cout << "O ";
		}
		cout << endl;
	}
}

int main()
{   
	testcase()
	{
		input();
		cout << endl;
	}
}
 





