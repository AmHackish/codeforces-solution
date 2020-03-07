#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		string s;
		cin >> s;

		if(n == 2)
		{
			if(s[0]<s[1])
			{
				cout << "YES" << endl;
				cout << 2  << endl;
				cout << s[0] << " " << s[1] << endl;
			}
			else
				cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl << 2 << endl;
			cout << s[0] << " ";
			for(int i=1;i<n;i++)
				cout << s[i];
			cout << endl;
		}

	}
	return 0;
}
  