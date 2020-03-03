#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];

	int m;
	cin >> m;

	std::vector<int> b(m);
	for(int i=0;i<m;i++)
		cin >> b[i];

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	cout << a[n-1] << " " << b[m-1] << endl;
	return 0;
}
  