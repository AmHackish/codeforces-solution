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
			v[0]++;
		if(s[i]=='u')
			v[1]++;
		if(s[i]=='l')
			v[2]++;
		if(s[i]=='b')
			v[3]++;
		if(s[i]=='a')
			v[4]++;
		if(s[i]=='s')
			v[5]++;
		if(s[i]=='r')
			v[6]++;
	}
	int cnt=0;
	cnt = min(v[0],min(v[2],min(v[6],min(v[3],v[5]))));
	if(v[1]<=1  or v[4]<=1)
		cout << 0 << endl;
	else
	{
		v[1]/=2;
		v[4]/=2;
		int cnt1 = min(v[1],v[4]);
		cout << min(cnt1,cnt1) << endl;
	}
	return 0;
}