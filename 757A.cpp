#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	string s;
	cin >> s;

	vector<int>v(7);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='B')
			v[0]+=2;
		if(s[i]=='u')
			v[1]++;
		if(s[i]=='l')
			v[2]+=2;
		if(s[i]=='b')
			v[3]+=2;
		if(s[i]=='a')
			v[4]++;
		if(s[i]=='s')
			v[5]+=2;
		if(s[i]=='r')
			v[6]+=2;
	}
	int cnt=0;
	sort(v.begin(),v.end());
	cout << v[0]/2 << endl;
	return 0;
}