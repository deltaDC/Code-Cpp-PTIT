#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a[5] = {17, 8, 91, 115, 12};
	int res = a[0];
	for(int i = 1; i < 5; i++)
	{
		res = max({__gcd(res, a[i]) , __gcd(res, a[i] - 1), __gcd(res, a[i] - 2)});
	}
    cout << res;
}

