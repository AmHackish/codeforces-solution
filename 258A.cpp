#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	string s;
	cin >> s;
	int k = s.length();
	for(int i=0;i<s.length();i++)
		if(s[i] == '0')
		{
			s.erase(s.begin()+i,s.begin()+i+1);
			break;
		}
	if(k == s.length())
		s.erase(s.begin(),s.begin()+1);
	cout << s << endl;
	return 0;
}