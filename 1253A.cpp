#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<int> a(n);
		vector<int> b(n);

		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<n;i++)
			cin >> b[i];

		int l=-1,r=0,k=0;
		if(n == 1 and a[0]<=b[0])
		{
			cout << "YES" << endl;
			continue;
		}
		else if(n==1 and a[0]>b[0])
		{
			cout << "NO" << endl;
			continue;
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]!= b[i] and l==-1)
			{
				l = i;
				k = b[i]-a[i];
			}
			if(l!=-1 and a[i]==b[i])
			{
				r = i;
				break;
			}
		}
		if(r == 0 and l!=-1)
			r = n;
		for(int i=l;i<r;i++)
		{
			if(k>0)
				a[i]+=k;
		}
		if(a == b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
  