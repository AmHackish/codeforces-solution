#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	std::vector<int> v;
	int ans=0;
	for(int i=0;i<s.length();i++)
		if(s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U' or s[i] == 'Y')
			ans++;
	if(ans)
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U' or s[i] == 'Y')
				v.push_back(i+1);
		}
		std::vector<int> p;
		p.push_back(v[0]);
		p.push_back(s.length()-v[v.size()-1]+1);
		for(int i=0;i<v.size()-1;i++)
		{
			p.push_back(v[i+1]-v[i]);
		}
		sort(p.begin(),p.end());
		cout << p[p.size()-1] << endl;
	}
	else
		cout << s.length()+1 << endl;			
	return 0;
} 