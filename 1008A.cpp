#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int k=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='a' and s[i]!='u' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='n')
		{
			if(s[i+1]!='a' and s[i+1]!='u' and s[i+1]!='e' and s[i+1]!='i' and s[i+1]!='o')
			{
				cout << "NO" << endl;
				return 0;
			}

		}
	}
	cout << "YES" << endl;
	return 0;
}
