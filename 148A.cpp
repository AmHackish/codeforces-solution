#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> coins(n);
	for(int i=0; i<n; i++)
		cin >> coins[i];
	vector<int> v(101);
	for(int i=0; i<n; i++)
		v[coins[i]]++;
	sort(v.begin(), v.end());
	cout << v[100] << endl;
	return 0;
}