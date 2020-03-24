#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;

	vector<int> a(n),ans;
	map<int,int> ap;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		ap[a[i]] = i+1;
	}

	if(ap.size()<k)
		cout << "NO" << endl;
	else
	{
		cout << "YES" << endl;
		for(int i=0;i<n;i++)
		{
			if(ap[a[i]]!=-1)
			{
				ans.push_back(ap[a[i]]);
				ap[a[i]] = -1;
			}
		}
		for(int i=0;i<k;i++)
			cout << ans[i] << " ";
	}
	return 0;
}
