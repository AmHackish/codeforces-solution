#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,s,k;
		cin >> n >> s >>k;
		vector<int>f(k);
		for(int i=0;i<k;i++)
			cin >> f[i];
		vector<int>b(n+1,0);
		for(int i=0;i<k;i++)
			b[f[i]]++;
		
		vector<int>p;
		for(int i=1;i<n+1;i++)
		{
			if(b[i] == 0)
				p.push_back(i);
		}
		if(p.size() == 0)
			cout << 0 << endl;
		else
		{
			int ans = abs(s-p[0]);
			for(int i=1;i<p.size();i++)
			{
				ans = min(ans,abs(s-p[i]));
			}
			cout << ans << endl;
		}
			
	}
	return 0;
}
  