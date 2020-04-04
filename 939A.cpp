#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	int n;
	cin >> n;

	vector<int>f(n);
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		cin >> f[i];
		m[i+1] = f[i];
	}
	bool ans = false;
	for(int i=0;i<n;i++)
	{
		int a = i+1,b = m[i+1],c = f[m[i+1]-1],d = m[c];
		if(a == d)
		{
			ans = true;
			break;
		}
	}
	if(ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
