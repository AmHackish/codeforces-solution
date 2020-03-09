#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	if(n%2==0)
		cout << n/2 << endl;
	else
	{
		bool yes=false;
		for(int i=1;i<n;i++)
			if(s[i]=='1')
				yes=true;
		if(yes)
			cout << (n+1)/2 << endl;
		else
			cout << n/2 << endl;
	}

	return 0;
}
