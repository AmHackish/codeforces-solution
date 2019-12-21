#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,money=0;
	cin >> n;
	pair<int,int>c;
	std::vector<pair<int,int>> d(n);

	cin >> d[0].first >> d[0].second;
	int y = d[0].second;
	money+=d[0].first*d[0].second;

	for(long long int i=1;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		d[i].first = a;
		d[i].second = b;
		if(d[i].first*y <= d[i].first*d[i].second)
		{
			money += d[i].first*y;
		}
		else
		{
			money+=d[i].first*d[i].second;
			y = d[i].second;
		}
	}
	cout << money << endl;
	return 0;
}  