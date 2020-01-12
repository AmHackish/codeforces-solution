#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];
	int m;
	cin >> m;
	std::vector<int > g(m);
	for(int i=0;i<m;i++)
		cin >> g[i];

	sort(v.begin(),v.end());
	sort(g.begin(), g.end());
	int cnt=0;
	int i=0,j=0;
	while(i<n and j<m)
	{
		if(abs(v[i]-g[j]) <=1)
		{
			cnt++;
			i++;
			j++;
		}
		else
		{
			if(g[j]<v[i])
				j++;
			else
				i++;
		}
	}
	cout << cnt << endl;
	return 0;
}

