#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(2*n);
	for(int i=0;i<2*n;i++)
		cin >> v[i];

	sort(v.begin(),v.end());
	int k=0,l=0;
	for(int i=0;i<n;i++)
		k+=v[i];
	for(int i=n;i<2*n;i++)
		l+=v[i];

	if(k == l)
		cout << -1 << endl;
	else
	{
		for(int i=0;i<2*n;i++)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}
  