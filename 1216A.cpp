#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	int n,cnt=0;
	cin >> n;

	string s;
	cin >> s;

	for(int i=0;i<n;i+=2)
	{
		if(s[i] == 'a' and s[i+1] == 'b')
			continue;
		else if(s[i] == 'b' and s[i+1] == 'a')
			continue;
		else
		{
			if(s[i] == 'a')
			{
				cnt++;
				s[i+1] = 'b';
			}
			else
			{
				cnt++;
				s[i+1] = 'a';
			}
		}
	}
	cout << cnt << endl << s << endl;
	return 0;
}
