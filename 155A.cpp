#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin >> v[i];
	int mini = v[0],maxi=v[0],cnt=0;
	for(int i=1;i<n;i++)
	{
		if(v[i]<mini)
		{
			cnt++;
			mini=v[i];
		}
		else if(v[i]>maxi)
		{
			cnt++;
			maxi = v[i];
		}
	}
	cout << cnt << endl;
	return 0;
}  