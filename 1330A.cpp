#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,x,y=0;
		cin >> n >> x;

		y=x;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin >> a[i];

		sort(a.begin(),a.end());

		int siz = a[n-1]+x+1;
		vector<int> v(siz);
		for(int i=0;i<n;i++)
			v[a[i]]++;

		for(int i=1;i<siz;i++)
		{
			if(y == 0)
				break;
			if(v[i] == 0)
			{
				v[i]++;
				y--;
			}
		}
		int ans = 0;
		for(int i=1;i<siz;i++)
			if(v[i] == 0)
			{
				ans = i;
				break;
			}
		if(ans!=0)
			cout << ans-1 << endl;
		else
			cout << siz-1 << endl;
	}
	return 0;
}
