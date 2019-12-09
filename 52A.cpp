#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	vector<int> num(4);
	for(int i=0; i<n; i++)
		num[v[i]]++;
	sort(num.begin(), num.end());
	cout << num[1]+num[2] << endl;
	return 0;
}  