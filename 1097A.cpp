#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<string> v(5);
	for(int i=0; i<5; i++)
		cin >> v[i];
	for(int i=0; i<5; i++)
	{
		if(v[i][0] == s[0])
		{
			cout << "YES" << endl;
			return 0;
		}
		else if(v[i][1] == s[1])
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}  