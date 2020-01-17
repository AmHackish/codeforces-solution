#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	pair<int,int>c;
	vector<pair<int,int>> d;
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		c = make_pair(v[i],i+1);
		d.push_back(c);
	}

	sort(v.begin(), v.end(),greater<>());
	sort(d.begin(), d.end(),greater<>());
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=v[i]*i + 1;

	cout << sum << endl;
	for(int i=0;i<n;i++)
		cout << d[i].second << " ";
	cout << endl;

	return 0;
}  