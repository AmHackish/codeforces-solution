#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,t;
	cin >> s >> t;
	if(s.length()!=t.length())
		cout << "NO" << endl;
	else
	{
		std::vector<int> a;
		std::vector<int> b;
		std::vector<int> c;
		std::vector<int> d;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] =='u')
				a.push_back(i);
			else 
				b.push_back(i);
		}
		for(int i=0;i<t.length();i++)
		{
			if(t[i]=='a' or t[i] == 'e' or t[i] == 'i' or t[i] == 'o' or t[i] =='u')
				c.push_back(i);
			else 
				d.push_back(i);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		sort(c.begin(),c.end());
		sort(d.begin(),d.end());
		
		if(a == c and b == d)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	
	}
	return 0;
}  