#include <bits/stdc++.h>

using namespace std;
int checkNU(int k)
{
	vector<int> v;
	while(k!=0)
	{
		v.push_back(k%10);
		k = k/10;
	}
	sort(v.begin(), v.end());
	for(int i=0; i<v.size()-1; i++)
		if(v[i] == v[i+1])
			return -1;
	return 1;
}
int main()
{
	int l,r;
	cin >> l >> r;
	for(int i=l; i<=r; i++)
	{
		int j = checkNU(i);
		if(j == 1)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << -1;
	return 0;
} 