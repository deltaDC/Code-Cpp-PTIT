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

class sinhvien
{
	public:
		string ma, ten, lop, email;
		
		void nhap()
		{
			getline(cin, ma);
			getline(cin, ten);
			getline(cin, lop);
			getline(cin, email);
		}
		
		void in()
		{
			cout << ma << " " << ten << " " << lop << " " << email << endl;
		}
	
};

void inhoa(string &s)
{
	for(int i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}
}

int main()
{
    int n; cin >> n;
    cin.ignore();
    sinhvien a[n];
    for(int i = 0; i < n; i++)
    {
    	a[i].nhap();
	}
	//B15DCKT150
	//Ke toan
	int t; cin >> t; cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		inhoa(s);
		cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
		
		for(int i = 0; i < n; i++)
		{
			if((a[i].lop[0] == 'E' && (a[i].ma[5] == 'C' || a[i].ma[5] == 'A'))) continue;
			if(a[i].ma[5] == s[0])
			{
				a[i].in();
			}
		}
	}
}





