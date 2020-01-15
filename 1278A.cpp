#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		bool ans=false;
		string a,b;
		cin >> a >> b;
		if(b.length()<a.length())
		{
			cout << "NO" << endl;
			continue;
		}
		vector <int> cnta(26);
		for(int i=0;i<a.length();i++)
			cnta[a[i]-'a']++;
		for(int i=0;i<=b.length()-a.length();i++)
		{
			vector <int> cntb(26);
			for(int j=i;j<(i+a.length());j++)
				cntb[b[j]-'a']++;
			if(cnta == cntb)
			{
				cout << "YES" << endl;
				ans=true;
				break;
			}
		}
		if(!ans)
			cout << "NO" << endl;
	}
	return 0;
}  