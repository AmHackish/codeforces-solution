#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	vector<bool>a(m+1,false);
	while(n--)
	{
		int x;
		cin >> x;
		vector<int> v(x);
		for(int i=0;i<x;i++)
		{
			cin >> v[i];
			a[v[i]] = true;
		}
	}
	for(int i=1;i<m+1;i++)
		if(a[i]==false)
		{
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	return 0;
}
