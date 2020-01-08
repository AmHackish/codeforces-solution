#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,k,cnt=0;
	cin >> n >> k;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		if(v[i]<0)
			cnt++;
	}
	sort(v.begin(), v.end());
	int sum=0;
	if(cnt<=k)
		for(int i=0;i<cnt;i++)
			sum+=abs(v[i]);
	else
	{
		int j=0;
		while(k>0)
		{
			if(v[j] < 0)
				sum+= abs(v[j]);
			k--;
			j++;
		}
	}
	cout << sum << endl;
	return 0;
}
  