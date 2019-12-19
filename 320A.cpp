#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int k=0;
	for(int i=0;i<s.length();)
	{
		if(s[i]=='1' and s[i+1] == '4' and s[i+2] == '4')
			i=i+3;
		else if(s[i]=='1' and s[i+1] == '4')
			i=i+2;
		else if(s[i]=='1')
			i++;
		else
		{
			k++;
			break;
		}
	}
	if(k)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
 	return 0;
} 