#include <bits/stdc++.h>
 
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		a[i] = v[i];
	}
	sort(v.begin(),v.end());

	vector<int>ans(n-1);
	for(int i=0;i<n-1;i++)
		ans[i] = v[i+1]-v[i];
	int cnt=0;
	for(int i=0;i<n-1;i++)
		cout << ans[i] << endl;
	for(int i=0;i<n-2;i++)
		if(ans[i]!=ans[i+1])
			cnt++;
	if(cnt == 0)
		cout << 1 << endl;
	else
	{
		if(cnt == 1 and ans[n-2]==ans[n-3] and ans[0] == ans[1])
			cout << -1 << endl;
		else if(cnt == 1 and ans[n-2]!=ans[n-3])
		{
			for(int i=0;i<n;i++)
				if(v[n-1] == a[i])
				{
					cout << i+1 << endl;
					break;
				}
		}
		else if(cnt == 1 and ans[0]!=ans[1])
		{
			for(int i=0;i<n;i++)
				if(v[0] == a[i])
				{
					cout << i+1 << endl;
					break;
				}
		}
		else if(cnt > 2)
			cout << -1 << endl;
		else if(cnt == 2)
		{
			vector<int>s;
			for(int i=0;i<n-2;i++)
				if(ans[i] !=ans[i+1])
					s.push_back(i);
			if(s[1] != s[0]+1)
				cout << -1 << endl;
			else
			{
				for(int i=0;i<n;i++)
					if(v[s[1]+1] == a[i])
						cout << i+1 << endl;
			}
		}
	}

	return 0;
}