#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s ="qwertyuiopasdfghjkl;zxcvbnm,./";
	char c;
	string t;
	cin >> c >> t;
	for(int i=0;i<t.length();i++)
	{
		for(int j=0;j<s.length();j++)
		{
			if(t[i] == s[j]  and t[i]!='/' and c == 'L')
			{
				t[i] = s[j+1];
				break;

			}
			else if(t[i] == s[j] and t[i]!='q' and c == 'R')
			{
				t[i] = s[j-1];
				break;
			}
		}
	}
	cout << t << endl;
	return 0;
} 