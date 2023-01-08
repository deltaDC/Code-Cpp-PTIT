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



class SinhVien
{
private:
	string ten, lop, ngaysinh;
	double gpa;	
public:
	void nhap()
	{
		getline(cin, ten);
		cin >> lop >> ngaysinh >> gpa;
		chuanhoans(ngaysinh);
	}
	
	void chuanhoans(string &s)
	{
		if(s[2] != '/') s = "0" + s;
		if(s[5] != '/') s.insert(3, "0");
	}
	void xuat()
	{
		cout << "B20DCCN001 " << ten << " " << lop << " " << ngaysinh << " " << fixed << setprecision(2) << gpa;
	}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}





