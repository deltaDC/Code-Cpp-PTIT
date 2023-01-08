#include<bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define testcase() int t; cin >> t; while(t--)

int cnt = 0;

void chuanhoa(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
}

class sinhvien
{
	public:
		string ten, ma, tenchuan = "";
		double d1, d2, d3, dtb;
		
		void nhap()
		{
			cnt++;
			ma = "SV";
			if(cnt < 10) ma += "0" + to_string(cnt);
			else ma += to_string(cnt);
			cin.ignore();
			getline(cin, ten);
			cin >> d1 >> d2 >> d3;
			dtb = (d1 + d2 + d3) / 3;
			vector<string> v;
			stringstream ss(ten);
			string word;
			while(ss >> word)
			{
				chuanhoa(word);
				v.push_back(word);
			}
			for(int i = 0; i < v.size(); i++)
			{
				tenchuan += v[i];
				if(i != v.size() - 1) tenchuan += " ";
			}
		}
		
		void in()
		{
			cout << ma << " " << tenchuan << " " << fixed << setprecision(2) << dtb << " ";
		}
};

bool comp(sinhvien a, sinhvien b)
{
	if(a.dtb == b.dtb)
	{
		return a.ma < b.ma;
	}
	return a.dtb > b.dtb;
}

int main()
{
	int n; cin >> n;
	sinhvien a[n];
	for(int i = 0; i < n; i++)
	{
		a[i].nhap();
	}
	sort(a, a + n, comp);
	double dtbcurr = 0;
	int rank = 1;
	int cnt = 1;
	for(int i = 0; i < n; i++)
	{
		a[i].in();
		if(i == 0)
		{
			cout << rank << endl;
			dtbcurr = a[i].dtb;
		}
		else
		{
			int temp = a[i].dtb;
			if(temp == dtbcurr)
			{
				cout << rank << endl;
				cnt++;
			}
			else
			{
				rank += cnt;
				cout << rank << endl;
				cnt = 1;
			}
		}
	}
} 
