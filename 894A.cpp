#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int cnt=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i] == 'Q')
		{
			int fnd=i;
			for(int j=fnd;j<s.length();j++)
			{
				if(s[j] == 'A')
				{
					int lo=j;
					for(int k=lo;k<s.length();k++)
						if(s[k] == 'Q')
							cnt++;
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;

}  