#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k=0;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(v[i])
		{
			k++;
			cnt = max(cnt,k);
		}
		else
			k=0;
	}
	if(v[n-1] == 1)
	{
		int x=1;
		for(int i=0;i<n-1;i++)
		{
			if(v[i])
				x++;
			else
				break;
		}
		cnt = max(cnt,x);
	}
	cout << cnt << endl;
	return 0;
}
