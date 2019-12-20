#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	std::vector<int> v(26);
	getline(cin,s);
	for(int i=1;i<s.length();i++)
		if(s[i]>=97 and s[i]<=122)
			v[s[i]-'a']++;
	int cnt=0;
	for(int i=0;i<26;i++)
		if(v[i]!=0)
			cnt++;
	cout << cnt << endl;
	return 0;
}  