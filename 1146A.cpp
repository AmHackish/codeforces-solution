#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int cnt=0;
	for(int i=0;i<s.length();i++)
		if(s[i]=='a')
			cnt++;
	if(cnt>s.length()/2)
		cout << s.length() << endl;
	else
	{
		cout << cnt + cnt-1 << endl; 
	}
	return 0;
}  