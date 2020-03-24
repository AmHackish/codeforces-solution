#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;

	vector<string> s(n),t(m);
	for(int i=0;i<n;i++)
		cin >> s[i];
	for(int i=0;i<m;i++)
		cin >> t[i];

	int test=0;
	cin >> test;
	while(test--)
	{
		int x;
		cin >> x;
		string ans="";
		if(x%n == 0)
			ans+=s[n-1];
		else
			ans+=s[x%n -1];
		if(x%m == 0)
			ans+=t[m-1];
		else
			ans+=t[x%m-1];

		cout << ans << endl;
	}
	return 0;
}
