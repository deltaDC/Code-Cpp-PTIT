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

void chuanhoa(string &s)
{
	for(int i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}
}

class giangvien
{
	public:
		string ten, nganh, ma, lastname, teninhoa;
		
		void nhap()
		{
			cnt++;
			ma = "GV";
			if(cnt < 10)
			{
				ma += "0" + to_string(cnt);
			}
			else ma += to_string(cnt);
			getline(cin, ten);
			teninhoa = ten;
			chuanhoa(teninhoa);
			getline(cin, nganh);
			stringstream ss(nganh);
			string word;
			string temp = "";
			while(ss >> word)
			{
				temp += word[0];
			}
			chuanhoa(temp);
			nganh = temp;
			
			stringstream ss2(ten);
			string word2;
			vector<string> v;
			while(ss2 >> word2)
			{
				v.push_back(word2);
			}
			lastname = v[v.size() - 1];
		}
		
		void in()
		{
			cout << ma << " " << ten << " " << nganh << endl;
		}
	
};

bool comp(giangvien a, giangvien b)
{
	if(a.lastname == b.lastname)
	{
		return a.ma < b.ma;
	}
	return a.lastname < b.lastname;
}

int main()
{
    int n; cin >> n;
    cin.ignore();
    giangvien a[n];
    for(int i = 0; i < n; i++)
    {
    	a[i].nhap();
	}
	int t; cin >> t; //cin.ignore();
	while(t--)
	{
		string s; cin >> s;
		string temp = s;
		chuanhoa(temp);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
		for(int i = 0; i < n; i++)
		{
			if(a[i].teninhoa.find(temp) != string::npos)
			{
				a[i].in();
			}
		}
	}
}





