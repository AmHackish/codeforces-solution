#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]>='5')
			s[i] = ('9'-s[i])+'0';
	}
	if(s[0]!='9' and s[0]>='5')
		s[0] = ('9'-s[0])+'0';
	cout << s;
	cout << endl;
	return 0;

}  