#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m,cnt=0,x=-1,y=-1;
		cin >> m;
		string t,s;
		cin >> s >> t;
		for(int i=0;i<m;i++)
		{
			if(s[i]!=t[i])
			{
				if(x == -1)
					x = i;
				else if(y == -1)
					y = i;
				cnt++;
			}
		}
		if(cnt > 2)
			cout << "No" << endl;
		else
		{
			char c = s[x];
			s[x] = t[y];
			t[y] = c;
			if(s == t)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	return 0;
}
