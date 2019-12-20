#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,t;
	cin >> s;
	std::vector<char> v;
	char c=' ';
	if(s.length()==1 or s.length()==2)
		cout << s << endl;
	else
	{
		for(int i=0;i<s.length()-2;)
	{
		if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
			i+=3;
		else
		{
			v.push_back(s[i]);
			if(s[i+1]=='W' and s[i+2]=='U' and s[i+3]=='B' and i<(s.length()-3))
			{
				v.push_back(c);	
			}
			i++;
		}
		}
		if(s[s.length()-4]=='W' and s[s.length()-3]=='U' and s[s.length()-2] == 'B')
			v.push_back(s[s.length()-1]);
		else if(s[s.length()-3]!='W')
		{
			v.push_back(s[s.length()-2]);
			v.push_back(s[s.length()-1]);
		}
		else if(s[s.length()-3]=='W' and s[s.length()-2]!='U')
		{
			v.push_back(s[s.length()-2]);
			v.push_back(s[s.length()-1]);
		}
		else if(s[s.length()-3]=='W' and s[s.length()-2]=='U' and s[s.length()-1]!='B')
		{
			v.push_back(s[s.length()-2]);
			v.push_back(s[s.length()-1]);
		}
		for(int i=0;i<v.size();i++)
			cout << v[i];
		cout << endl;
		
	}
	return 0;
}  