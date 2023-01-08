#include<bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define testcase() int t; cin >> t; while(t--)


int main()
{
	ifstream input("DATA.txt");
	int t;
	input >> t;
	cout << t << endl;
	while(t--)
	{
		int he;
		string s;
		input >> he >> s;
		//cout << he << endl << s << endl;
		if(he == 2) cout << s << endl;
		else
		{
			ll res = 0;
			ll mu = 0;
			for(int i = s.size() - 1; i >= 0; i--)
			{
				ll temp = (s[i] - '0') * pow(2, mu);
				mu++;
				res += temp;
			}
			cout << res << endl;
		}
	}
} 
