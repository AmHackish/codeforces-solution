#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s,t;
	cin >> s;
	t = "0000000000";
	for(int i=0;i<n;i++)
	{
		if(s[i] == 'L')
		{
			int k=0;
			for(int j=0;j<10;j++)
				if(t[j] == '0')
				{
					k=j;
					cout << "jh";
					break;
				}
			cout << k << endl;
			t[k] == '1';
			cout << t[k];
		}
		else if(s[i] == 'R')
		{
			int k=0;
			for(int j=9;j>=0;j--)
				if(t[j] == '0')
				{
					k=j;
					break;
				}
			t[k] == '1';
		}
		else
		{
			t[i] = '0';
		}
	}
	cout << t<< endl;

	return 0;
}  