#include <bits/stdc++.h>
using namespace std;

#define lim 1000005
#define MOD 1000000007
#define ll long long

void low(string &s)
{
	for(int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
}

int main()
{   
	string s;
	getline(cin , s);
	string word;
	stringstream ss(s);
	vector<string> v;
	while(ss >> word)
	{
		low(word);
		v.push_back(word);
	}
	bool firstletter = true;
	bool lastletter = false;
	for(int i = 0; i < v.size(); i++) 
	{
		if(v[ i ][ v[i].size() - 1 ] == '.' || v[ i ][ v[i].size() - 1 ] == '?' || v[ i ][ v[i].size() - 1 ] == '!')
		{
			lastletter = true;
		}
		if(firstletter == true)
		{
			v[i][0] = toupper(v[i][0]);
			firstletter = false;
		}
		if(lastletter == true)
		{
			v[i].erase(v[i].end() - 1);
		}
		cout << v[i];
		//if(i == v.size() - 1) break;
		if(lastletter == false) cout << " ";
		if(lastletter == true)
		{
			cout << endl;
			lastletter = false;
			firstletter = true;
		}
	}
}
 






