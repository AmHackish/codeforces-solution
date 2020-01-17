#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		bool b = false;
		cin >> n;
		string s;
		cin >> s;
		for(int i=0,j=n-1;i!=j and i<n and j>=0;i++,j--)
		{
			int k = abs(s[i]-s[j]);
			if(k == 1 or k>2)
			{
				b = true;
				break;
			}
		}
		if(b)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}  