#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,m;
	cin >> n >> m;

	vector<int> a(n);
	vector<int> b(m);

	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<m;i++)
		cin >> b[i];

	sort(a.begin(),a.end());
	for(int i=0;i<m;i++)
		cout << upper_bound(a.begin(),a.end(),b[i])-a.begin() << " ";
	cout << endl;
	return 0;

}
  