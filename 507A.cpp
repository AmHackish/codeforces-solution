#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	std::vector<int> v(n);
	v = a;
	sort(v.begin(),v.end());
	pair<int,int>c;
	std::vector<pair<int,int>> d;
	for(int i=0;i<n/2;i++)
	{
		c=make_pair(v[i],v[n-i-1]);
		d.push_back(c);
	}
	for(int j=0;j<d.size();j++)
	{
		int x,y;
		for(int k=0;k<n;k++)
		{
			if(d[j].first == a[k])
				x = k+1;
			if(d[j].second == a[k])
				y = k+1; 
		}
		cout << x << " " << y << endl;
	}
	return 0;
} 