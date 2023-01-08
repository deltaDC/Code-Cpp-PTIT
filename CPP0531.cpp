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

//bai cua a Jim -> tich co huong giong c3

struct ToaDo
{
    int x;
    int y;
    int z;
};

ToaDo point[4];
ToaDo vec[3];
ToaDo vec_AB;

void input()
{
    for(int i = 0; i < 4; i++) cin >> point[i].x >> point[i].y >> point[i].z;
}

void solve()
{
    vec[0].x = (point[1].x - point[0].x);
    vec[0].y = (point[1].y - point[0].y);
    vec[0].z = (point[1].z - point[0].z);
    vec[1].x = (point[2].x - point[0].x);
    vec[1].y = (point[2].y - point[0].y);
    vec[1].z = (point[2].z - point[0].z);
    vec[2].x = (point[3].x - point[0].x);
    vec[2].y = (point[3].y - point[0].y);
    vec[2].z = (point[3].z - point[0].z);
    vec_AB.x = vec[0].y * vec[1].z - vec[0].z * vec[1].y;
    vec_AB.y = vec[0].z * vec[1].x - vec[0].x * vec[1].z;
    vec_AB.z = vec[0].x * vec[1].y - vec[0].y * vec[1].x;
    int ans = 0;
    ans = vec_AB.x * vec[2].x + vec_AB.y * vec[2].y + vec_AB.z * vec[2].z;
    if (!ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        input();
        solve();
    }
    return 0;
}
 





