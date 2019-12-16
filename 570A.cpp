#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	std::vector<int> can(m);
	for(int i=0; i<m; i++)
	{
		std::vector<long long int> people(n);
		long long int ans=0,k;
		for(int j=0;j<n;j++)
		{
			cin >> people[j];
			ans = max(ans,people[j]);
		}
		for(int j=0;j<n;j++)
			if(ans == people[j])
			{
				can[i]=j+1;
				break;
			}
	}
	std::vector<int> v(n+1);
	for(int i=0;i<m;i++)
		v[can[i]]++;
	std::vector<int> p(n+1);
	p = v;
	sort(p.begin(), p.end());
	for(int i=1;i<n+1;i++)
		if(p[n] == v[i])
		{
			cout << i << endl;
			break;
		}
	return 0;
}  