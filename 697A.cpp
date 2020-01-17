#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,s,x;
	cin >> t >> s >> x;
	if(x < t)
		cout << "NO" << endl;
	else if(x == t)
		cout << "YES" << endl;
	else
	{
		int i = 1,u=t;
		while(t<x)
		{
			t = u+s*i;
			if(t == x or t+1 == x)
			{
				cout << "YES" << endl;
				return 0;
			}
			i++;
		}
		cout << "NO" << endl;
	}
	return 0;
}  