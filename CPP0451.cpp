#include <bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

#define faster() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define testcase() int t; cin >> t; while(t--)

/*
1
6
1 3 5 7 9 11
6 7
*/


int main() 
{
	testcase()
	{
		int n; cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int k, x; cin >> k >> x;
		int mid = lower_bound(a.begin(), a.end(), x) - a.begin();
		int left, right;
		if(a[mid] == x)
		{
			left = mid - 1;
			right = mid + 1;
		}
		else
		{
			right = mid;
			left = mid - 1;
		}
		for(int i = k / 2 - 1; i >= 0; i--)
		{
			cout << a[left - i] << " ";
		}
		for(int i = 0; i < k / 2; i++)
		{
			cout << a[right + i] << " ";
		}
		cout << endl;
	}
}
 





