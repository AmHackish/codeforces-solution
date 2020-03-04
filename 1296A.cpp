#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<int> v(n);
		for(int i=0;i<n;i++)
			cin >> v[i];

		sort(v.begin(),v.end());
		int k=0,l=0;
		for(int i=0;i<n;i++)
		{
			if(v[i]%2 == 0)
				k++;
			else
				l++;
		}
		if(l == 0 or (k == 0 and l%2 == 0))
			cout << "NO" << endl;
		else
			cout << "YES" <<  endl;
	}
	return 0;
}
  