#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	if(s[0] == '-' and s.length()>3)
	{
		if(s[s.length()-1]>s[s.length()-2])
			s.erase(s.length()-1,1);
		else
			s.erase(s.length()-2,1);
		cout << s << endl;
	}
	else if(s[0] == '-' and s.length() == 2)
		cout << 0 << endl;
	else if(s[0] == '-' and s.length() == 3)
	{
		if(s[s.length()-1] == '0')
			cout << 0 << endl;
		else if(s[s.length()-1]>s[s.length()-2])
		{
			s.erase(s.length()-1,1);
			cout << s << endl;
		}
		else
		{
			s.erase(s.length()-2,1);
			
			cout << s << endl;
		}
	}
	else
		cout << s << endl;
	return 0;
}  