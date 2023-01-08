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

ll cnt = 0;

class NhanVien
{
	public:
		string ma, ten, gt, ns, dc, mst, ngayhd, ngay, thang, nam;
	
		friend istream& operator >> (istream &in, NhanVien &x)
		{
			cnt++;
			if(cnt < 10) x.ma = "0000" + to_string(cnt);
			else if(cnt >= 10 && cnt < 100) x.ma = "000" + to_string(cnt);
			else if(cnt >= 100 && cnt < 1000) x.ma = "00" + to_string(cnt);
			else if(cnt >= 1000 && cnt < 10000) x.ma = "0" + to_string(cnt);
			else x.ma = to_string(cnt);
			in.ignore();
			getline(cin, x.ten);
			getline(cin, x.gt);
			getline(cin, x.ns);
			stringstream ss(x.ns);
			getline(ss, x.thang, '/');
	        getline(ss, x.ngay, '/');
	        getline(ss, x.nam, '/');
			getline(cin, x.dc);
			getline(cin, x.mst);
			cin >> x.ngayhd;
			return in;
		}
		
		friend ostream& operator << (ostream &out, NhanVien x)
		{
			out << x.ma << " " << x.ten << " " << x.gt << " " << x.ns << " " << x.dc << " " << x.mst << " " << x.ngayhd << endl;
			return out;
		}
	
};

bool comp(NhanVien a, NhanVien b)
{
	if(a.nam < b.nam) return 1;
    if(a.nam > b.nam) return 0;
    if(a.thang < b.thang) return 1;
    if(a.thang > b.thang) return 0;
    if(a.ngay < b.ngay) return 1;
    return 0;
}

void sapxep(NhanVien a[], int n)
{
	sort(a, a + n, comp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}





