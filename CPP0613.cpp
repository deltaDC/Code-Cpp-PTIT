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

class SinhVien
{
	public:
		string ma, ten, lop, ngaysinh;
		double gpa;	
	
		friend istream& operator >> (istream &in, SinhVien &x)
		{
			cnt++;
//			in.ignore();
			scanf("\n");
			if(cnt < 10) x.ma = "B20DCCN00" + to_string(cnt);
			else if(cnt >= 10 && cnt < 100) x.ma = "B20DCCN0" + to_string(cnt);
			else x.ma = "B20DCCN" + to_string(cnt);
			x.ten = "";
			string s;
			getline(cin, s);
			stringstream ss(s);
			while(ss >> s)
			{
				s[0] = toupper(s[0]);
				for(int i = 1; i < s.size(); i++) s[i] = tolower(s[i]);
				x.ten += s;
				x.ten += " ";
			}
			
			cin >> x.lop >> x.ngaysinh >> x.gpa;
			if(x.ngaysinh[2] != '/') x.ngaysinh = "0" + x.ngaysinh;
			if(x.ngaysinh[5] != '/') x.ngaysinh.insert(3, "0");
			return in;
		}
		
		friend ostream& operator << (ostream &out, SinhVien x)
		{
			out << x.ma << " " << x.ten << " " << x.lop << " " << x.ngaysinh << " " << fixed << setprecision(2) << x.gpa << endl;
			return out;
		}
	
};

bool comp(SinhVien a, SinhVien b)
{
	return a.gpa > b.gpa;
}

void sapxep(SinhVien a[], int n)
{
	sort(a, a + n, comp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}





