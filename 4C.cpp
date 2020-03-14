#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	int t;
	cin >> t;

	map<string, int> a;
	while(t--)
	{
		string s;
		cin >> s;
		if(a.count(s) == 0)
		{
			cout << "OK" << endl;
			a[s] = 1;
		}
		else
		{
			cout << s << a[s] << endl;
			a[s] += 1;
		}
	}
	return 0;
}
