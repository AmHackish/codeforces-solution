#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n,x;
	cin >> n >> x;

	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];

	int time=0,i;

	for(i=0;i<n;i++)
	{
		if(time >= x)
			break;
		if(v[i]>8)
		{
			time+=8;
			if(i!=n-1)
				v[i+1]+=v[i]-8;
		}
		else
			time+=v[i];
	}
	if(time>=x)
		cout << i << endl;
	else
		cout << -1 << endl;
	return 0;

}
  