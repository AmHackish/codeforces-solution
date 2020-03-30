#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string s;
		cin >> s;
		int f=0,j=0,k=0,i=s.length()-1;
		if(s[i] == 'o' and s[i-1] == 'p')
		{
			cout << "FILIPINO" << endl;
			continue;
		}
		else if(s[i] == 'u' and s[i-1]=='s')
		{
			if(s[i-2] == 'e' and s[i-3] == 'd')
				cout << "JAPANESE" << endl;
			if(s[i-2] == 'a' and s[i-3] == 'm')
				cout << "JAPANESE" << endl;
			continue;
		}
		else 
		{
			cout << "KOREAN" << endl;
			continue;
		}
	}
	return 0;
}