#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i] == 'z')
			s[i] = 'a';
		else
		{
			int k= int(s[i]);
			s[i]=char(k+1);
		}
	}
	cout << s << endl;
	return 0;
}
  