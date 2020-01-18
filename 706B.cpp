#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	int q;
	cin >> q;
	vector<int>b(q);
	for(int i=0;i<q;i++)
		cin >> b[i];
	sort(a.begin(),a.end());	
	for(int i=0;i<q;i++)
	{
		int upper1 = upper_bound(a.begin(), a.end(), b[i])-a.begin();
		cout << upper1 << endl;
	}
	return 0;
}
  