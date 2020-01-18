#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];

	int m;
	cin >> m;
	vector<int>q(m);
	for(int i=0;i<m;i++)
		cin >> q[i];

	vector<int> v(n);
	v[0] = a[0];
	for(int i=1;i<n;i++)
		v[i] = a[i]+v[i-1];
	for(int i=0;i<m;i++)
	{
		int k = lower_bound(v.begin(),v.end(),q[i])-v.begin();
		cout << k+1 << endl;
	}
	return 0;
}
  