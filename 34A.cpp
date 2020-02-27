#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];

	pair<int,int>c;
	vector<pair<int,int>> d;
	for(int i=0;i<n-1;i++)
	{
		c = make_pair(abs(a[i+1]-a[i]),i);
		d.push_back(c);
	}
	c = make_pair(abs(a[n-1]-a[0]),-1);
	d.push_back(c);
	sort(d.begin(),d.end());

	if(d[0].second == -1)
		cout << n << " " << 1 << endl;
	else
		cout << d[0].second+1 << " " << d[0].second+2 << endl;
	return 0;

}
  