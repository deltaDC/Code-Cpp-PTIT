#include<bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define testcase() int t; cin >> t; while(t--)

bool check(int n)
{
	int res = 0;
	double k = sqrt(n);
	for(int i = 1; i <= k; i++)
	{
		if(n % i == 0)
		{
			if(i != n) res += i;
			if(i != n / i && i != n && n / i != n) res += n / i;
		}
	}
	if(res > n) return 1;
	return 0;
}

int main()
{
	int a, b; cin >> a >> b;
	int cnt = 0;
	for(int i = a; i <= b; i++)
	{
		if(check(i))
		{
			cnt++;
		} 
	}
	cout << cnt;
} 
