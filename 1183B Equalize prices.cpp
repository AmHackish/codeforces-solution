#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int q;
	cin >> q;

	while(q--)
	{
		int n,k;
		cin >> n >> k;

		vector<int>a(n);
		for(int i=0;i<n;i++)
			cin >> a[i];

		sort(a.begin(),a.end());
		if((a[n-1]-a[0])>2*k)
			cout << -1 << endl;
		else
			cout << a[0] + k << endl;
	}
	return 0;
}
  