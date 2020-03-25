#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int n;
		cin >> n;
		vector<int>a(n);
		for(int i=0;i<n;i++)
			cin >> a[i];
		int cnt=0,mn = a[n-1];
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]>mn)
				cnt++;
			mn = min(a[i],mn);
		}
		cout << cnt << endl;
	}
	return 0;
}
