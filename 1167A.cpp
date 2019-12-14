#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int j=0; j<t; j++)
	{
		int n,k=0;
		cin >> n;
		string s;
		cin >> s;
		if(n<11)
			cout << "NO" <<  endl;
		else
		{
			if(s[0] == '8')
				cout << "YES" << endl;
			else
			{
				for(int i=0; i<s.length(); i++)
					if(s[i] == '8')
					{
						k=i;
						break;
					}
				int len = s.length()-k;
				if(len<11 or k==0)
					cout << "NO"<<endl;
				else
					cout << "YES"<<endl;
			}
		}
	}
	return 0;
} 