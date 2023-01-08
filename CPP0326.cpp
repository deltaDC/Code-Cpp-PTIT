#include <bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define testcase() int t; cin >> t; while(t--)

string solve(string a, string b)
{
	int lena = a.size();
	int lenb = b.size();
	if(lena == 0 || lenb == 0) return "0";
	vector<int> res(lena + lenb, 0);
	int in1 = 0, in2 = 0;
	for(int i = lena - 1; i >= 0; i--)
	{
		int nho = 0;
		int n1 = a[i] - '0';
		in2 = 0;
		for(int j = lenb - 1; j >= 0; j--)
		{
			int n2 = b[j] - '0';
			int sum = n1 * n2 + res[in1 + in2] + nho;
			nho = sum / 10;
			res[in1 + in2] = sum % 10;
			in2++;
//			for(auto x : res) cout << x;
//			cout << " " << n1 << " " << n2 << " " << sum << " " << nho << endl;
		}
		if(nho > 0)
		{
			res[in1 + in2] += nho;
		}
		in1++;
	}
	int i = res.size() - 1;
	while(i >= 0 && res[i] == 0) i--;
	if(i == -1) return "0";
	string s = "";
	while(i >= 0)
	{
		s += to_string(res[i]);
		i--;
	}
	return s;
}

int main()
{
    testcase()
    {
    	string a, b; cin >> a >> b;
    	cout << solve(a, b) << endl;
	}
}
 





